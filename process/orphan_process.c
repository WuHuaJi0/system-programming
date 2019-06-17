/** 
 * Created by 吴化吉
 * 孤儿进程简单示例
 **/

#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if( pid > 0 ){
        //父进程就退出了
        printf("我是父进程，我的进程号是：%d\n",getpid());
        sleep(1);
    }else{
        printf("我是子进程，我的父进程是%d\n",getppid());
        sleep(2);
        printf("我是子进程，父进程终止后，我的父进程是：%d\n",getppid());
    }
    return 0;
}

