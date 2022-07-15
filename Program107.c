#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0,cnt=0;
    char Data[10];

    printf("Enter file name \n");
    scanf("%s",Fname);
    printf("Enter count to read characters\n");
    scanf("%d",&cnt);
    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }

    // 0    Statring point
    // 1    Current position
    // 2    End point

    lseek(fd,cnt,0); // lseek(kashat,kiti,kuthun)

    read(fd,Data,cnt);
    write(1,Data,cnt);

    return 0;
}