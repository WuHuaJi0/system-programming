/** 
 * Created by 吴化吉
 **/

#include <stdio.h>
#include <signal.h>

static void signalHandler(int sig){
    printf("接受到了信号：%d\n",sig);
}

int main(int argc, char *argv[]) {
    signal(SIGINT,signalHandler);
    while (1){

    }
    return 0;
}

