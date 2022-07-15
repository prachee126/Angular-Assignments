#include<stdio.h>
#define  TRUE 1 
#define  FALSE 0 
typedef int BOOL;

BOOL check15Bit(int iNo)
{
        int iMask=0X00004000 ,iResult=0;
        
        iResult=iNo & iMask;
        if(iResult==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}

BOOL check518Bit(int iNo)
{
        int iMask=0X00020010 ,iResult=0;
        
        iResult=iNo & iMask;
        if(iResult==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}




BOOL check789Bit(int iNo)
{
        int iMask=0X0001120 ,iResult=0;
        
        iResult=iNo & iMask;
        if(iResult==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}
BOOL check7152128Bit(int iNo)
{
        int iMask=0X8104040 ,iResult=0;
        
        iResult=iNo & iMask;
        if(iResult==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
}
BOOL check1lastBit(int iNo)
{
        int iMask=0X10000001 ,iResult=0;
        
        iResult=iNo & iMask;
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
   ret= check1lastBit(ino);
   if(ret==1)
    printf("on");
   else
     printf("off");
    return 0;
}