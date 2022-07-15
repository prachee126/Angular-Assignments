//Maximum Throughput in Minimum Hardware Movement.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>
#define FILESIZE 1024

bool FileComp(char src[],char dest[])
{
    int Fdsrc=0,Fddest=0,r=0,iRet=0,iRet2=0,icmp=0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];
    Fdsrc=open(src,O_RDONLY);
    
        if(Fdsrc==-1)
        {
            printf("unable src\n");
           // return;
        }

    Fddest=open(dest,O_RDONLY);
    if(Fddest==-1)
    {
        printf("unable to open\n");
        ///return;
    }    

    while(1)
    {
        iRet=read(Fdsrc,Buffer1,FILESIZE);
        iRet2=read(Fddest,Buffer2,FILESIZE);

        if(iRet==0 || iRet2==0 || iRet2!=iRet)
        {
            break;
        }
        icmp=memcmp(Buffer1,Buffer2,iRet);
        if(icmp!=0)
        {
            break;
        }
    }
    if(iRet==0 && iRet2==0)
    {
        return true;
    }
    else
    {
        return false;
    }



    close(Fdsrc);
    close(Fddest);
}


int main()
{
    char Fname1[20];
    char Fname2[20];
         // Mug
    bool ret=false;
    
    printf("Enter file name containing data\n");
    scanf("%s",Fname1);
    printf("Enter file name to copy\n");
    scanf("%s",Fname2);

    

  ret=FileComp(Fname1,Fname2);
  if(ret==true)
  {
    printf("identical\n");
  }
  else
  {
    printf("not\n");
  }
  
    return 0;
}
