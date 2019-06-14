/** 
 * Created by 吴化吉
 * exec函数族示例，能够替换进程的代码堆栈数据，从而完全改变进程接下来的执行指令
 **/

#include <stdio.h>
#include <unistd.h>

int main() {


    int pid = fork();
    if( pid == 0 ){
        execl("/bin/ls","ls",NULL);
    }

    printf("执行到这里的进程是：%d\n",getpid());

    return 0;
}

