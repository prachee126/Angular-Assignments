#include<stdio.h>


#define TRUE 1
#define FALSE 0
int Check0(int iNo)
{
    auto int iDigit=0,flag=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
      if(iDigit==0)
      {
          flag=1;
          break;
      }
        iNo=iNo/10;
    }
    return flag;
    
}

int main()
{
    auto int iValue=0;
    auto int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Check0(iValue);
    if(iRet==1)
    {
        printf("Contains 0\n");
    }
    else
    {
        printf("Not\n");
    }

    return 0;
}