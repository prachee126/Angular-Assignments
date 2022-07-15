#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];
    int fd = 0;    
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;  
    }

    printf("File opened with FD %d\n",fd);

    printf("Enter the data to write : \n");
    scanf(" %[^'\n']s",Data);

    iRet = write(fd,Data,strlen(Data));

    printf("%d bytes written in the file\n",iRet);

    return 0;
}