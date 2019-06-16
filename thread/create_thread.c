/** 
 * Created by 吴化吉
 * 创建线程简单示例
 * 编译：gcc create_thread.c -lpthread
 **/

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* callback(void* args){
    printf("我是子线程，我的线程id是 %lu\n",pthread_self());
    return NULL;
}

int main() {
    pthread_t thread_id;
    pthread_create(&thread_id,NULL,callback,NULL);

    printf("我是主线程：我的线程id是%lu\n",pthread_self());

    //主线程暂停一下，以便让子线程能执行
    sleep(2);
    return 0;
}

