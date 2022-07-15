#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024
int CountSmall(char *Fname)
{
    int fd = 0,i=0,cnt=0;     // File descriptor
    int iRet = 0;
    char Data[FILESIZE];
 fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }
    printf("File is succefully opened with FD %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Data[i]<='z' && Data[i]>='a')
            {
                cnt++;
            }
        }
    }

    close(fd);
return cnt;
}


int main()
{
    char Fname[20];
         // Mug
         int ret=0;
    

    printf("Enter file name to open\n");
    scanf("%s",Fname);

  ret=CountSmall(Fname);
  printf("Small characters:\t%d",ret);
    return 0;
}
