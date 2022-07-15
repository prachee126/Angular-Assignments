//Maximum Throughput in Minimum Hardware Movement.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int Occurance(char *Fname,char ch)
{
    int fd=0,iRet=0,i=0,cnt=0,k=0;
    char Data[FILESIZE];
    fd=open(Fname,O_RDONLY);
    if(fd==-1)
    {
        return -1;
    }
    else
    {
        printf("Opened\n");
    }
    while(iRet=read(fd,Data,sizeof(Data)))
    {
        k++;
        for(i=0;i<iRet;i++)
        {
            if(Data[i]==ch)
            {
                cnt++;
            }
        }
    }
    printf("\n%d",k);
    return cnt;
}


int main()
{
    char Fname[20];
         // Mug
         int ret=0;
    char ch;

    printf("Enter file name to open\n");
    scanf("%s",Fname);
    printf("Enter character:\t");
    scanf("%c",&ch);
     scanf("%c",&ch);
  ret=Occurance(Fname,ch);
  printf("occurance:\t%d",ret);
    return 0;
}
