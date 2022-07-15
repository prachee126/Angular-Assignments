#include<stdio.h>
#define  TRUE 1 
#define  FALSE 0 
typedef int BOOL;

BOOL checkBit(int iNo,int pos)
{
        int iMask=0X00000000 ,iResult=0;
        iMask=iMask<<(pos-1);
        iMask=iMask^0;
        iResult=iMask&iNo;
        if(iResult==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}

int main()
{
    int ino=0;
    BOOL ret=0;

    printf("Enter number\n");
    scanf("%d",&ino);
   ret= checkBit(ino,1);
   if(ret==1)
    printf("on");
   else
     printf("off");
    return 0;
}