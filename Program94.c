#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>



int main()
{
    char Fname[20];
    int fd = 0;    

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable \n");
        return -1;  
    }

    printf("File opened with FD %d\n",fd);

    return 0;
}