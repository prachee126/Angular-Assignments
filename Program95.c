#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;     

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create\n");
        return -1;  
    }

    printf("File created with FD %d\n",fd);

    return 0;
}