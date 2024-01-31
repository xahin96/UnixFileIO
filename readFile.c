#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void){
    //Reads from check.txt into an array of characters
    int fd3=open("open.txt",O_RDONLY);

    if (fd3 == -1) {
        perror("Error opening file");
        return 1;
    }

    char *buff1 = (char *)malloc(10 * sizeof(char));

    if (buff1 == NULL) {
        perror("Memory allocation error");
        close(fd3);
        return 1;
    }

    long int n = read(fd3, buff1, 10);

    if (n == -1) {
        perror("Error reading from file");
        free(buff1);
        close(fd3);
        return 1;
    }

    printf("\nThe number of bytes read is %ld\n", n);
    printf("\n%s\n", buff1);

    free(buff1);
    close(fd3);
    return 0;
}
