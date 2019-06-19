/** 
 * Created by 吴化吉
 **/

#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if( pid > 0 ){
        printf("我是父进程,进程号是:%d\n",getpid());
        //父进程什么都不做，一直在休眠

    }else{
        printf("我是子进程,进程号是:%d\n",getpid());
    }
    return 0;
}

