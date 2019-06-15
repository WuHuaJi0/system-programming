/**
 * Created by 吴化吉
 * wait 函数，等待回收子进程
 **/

#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid = fork();
    if( pid > 0 ){
        int status;
        int child_pid = wait(&status);
        printf("子进程回收了%d 回收状态是%d\n",child_pid,status);
    }else{
        sleep(2);
        abort();
    }
    return 0;
}

