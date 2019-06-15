/** 
 * Created by 吴化吉
 * 利用管道来实现 ps aux | grep zsh
 * 父进程执行 ps aux 把结果输出到管道
 * 子进程从管道读取数据，并 grep zsh
 *
 **/

#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];

    int result = pipe(fd);
    if( result != 0 ){
        printf("管道创建失败，错误号\n");
    }

    int pid = fork();
    if( pid > 0 ){
        //父进程,把标准输出重定向到管道的写端
        dup2(fd[1],STDOUT_FILENO);
        execlp("ps","ps","aux",NULL);
    }else{
        //子进程，把标准输入重定向到管道的读端
        dup2(fd[0],STDIN_FILENO);
        execlp("grep","grep","zsh",NULL);
    }

    return 0;
}

