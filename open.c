#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
    int fd1=open("../../CLionProjects/untitled/open.txt", O_RDONLY, 0777);
    if(fd1==-1)
        printf("\n The operation was not successful\n");
    else
        printf("\n The file descriptor is %d\n",fd1);

    close(fd1);
    int fd2=open("../../CLionProjects/untitled/open.txt", O_RDONLY, 0777);
    if(fd2==-1)
        printf("\n The operation was not successful\n");
    else
        printf("\n The file descriptor is %d\n",fd2);
    close(fd2);

}