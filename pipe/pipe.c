/** 
 * Created by 吴化吉
 **/

#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];

    int result = pipe(fd);
    if( result == 0 ){
        printf("管道创建成功了\n");
    }else{
        printf("管道创建失败，错误号\n");
    }

    printf("管道的读端文件描述符：%d\n",fd[0]);
    printf("管道的写段文件描述符：%d\n",fd[1]);


    return 0;
}

