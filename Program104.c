//Maximum Throughput in Minimum Hardware Movement.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void FileCopy(char src[],char dest[])
{
    int Fdsrc=0,Fddest=0,r=0,iRet=0;
    char Buffer[FILESIZE];
    Fdsrc=open(src,O_RDONLY);
    
        if(Fdsrc==-1)
        {
            printf("unable src\n");
            return;
        }

    Fddest=creat(dest,0777);
    if(Fddest==-1)
    {
        printf("unable to create\n");
        return;
    }    
     while(iRet=read(Fdsrc,Buffer,FILESIZE)!=0)    //iRet=jevdha data read kela tevdh write
    {
      r=  write(Fddest,Buffer,iRet);
    }
    if(r==-1)
    {
        printf("Copy failed\n");
    }
    else
    {
        printf("written successfully\n");
    }
    close(Fdsrc);

}


int main()
{
    char Fname1[20];
    char Fname2[20];
         // Mug
         int ret=0;
    
    printf("Enter file name containing data\n");
    scanf("%s",Fname1);
    printf("Enter file name to copy\n");
    scanf("%s",Fname2);

    

  FileCopy(Fname1,Fname2);
  
    return 0;
}
