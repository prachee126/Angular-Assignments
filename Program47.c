#include<stdio.h>
#include<stdbool.h>

int Check2Freq(int iNo)
{
    auto int iDigit=0,iFreq=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
      if(iDigit==2)
      {
        iFreq++;    
      }
        iNo=iNo/10;
    }
    return iFreq;
    
}

int main()
{
    auto int iValue=0,iRet=0;
 
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Check2Freq(iValue);
    printf("Frequency of 2 in number\t%d",iRet);
    return 0;
}