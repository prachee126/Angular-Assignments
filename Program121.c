#include<stdio.h>


long int OnBit4(int iNo)
{
    int iMask=0X0000000F,iResult=0;
    if(iNo==15)
    {
       printf("already on\n");
        return iNo;
    }
    else
    
        iResult=iMask|iNo;
        
    return iResult;  
} 
void On710Bit(int iNo)
{
    int iMask1=0X00000080,iRes1=0,iRes2=0;
    int iMask2=0X00000028;
    iMask1<<(7);
    iRes1=iMask1^iNo;
    iMask2<<(9);
    iRes2=iMask2^iNo;
 printf("%d\t%d",iRes1,iRes2);

}
int Toggle7thBit(int iNo)
{
    int iMask=0X00000040;
    int iRes=0;
    iMask=iMask<<5;
    iRes=iMask^iNo;
    return iRes;
}
void Off710Bit(int iNo)
{
    int iMask1=0X00000080,iRes1=0,iRes2=0;
    int iMask2=0X00000028;
    iMask1<<(5);
    iRes1=iMask1&iNo;
    iMask2<<(8);
    iRes2=iMask2^iNo;
 printf("\n\n%d\t%d",iRes1,iRes2);

}

int main()
{
    int ino=0;
   int ret=0;

    printf("Enter number\n");
    scanf("%d",&ino);
   ret=OnBit4(ino);
    printf("%d\n",ret);    
    On710Bit(ino);
    ret=Toggle7thBit(ino);
    printf("7th bit:%d",ret);
    Off710Bit(ino);
    return 0;
}