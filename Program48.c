#include<stdio.h>
#include<stdbool.h>

int Check4Freq(int iNo)
{
    auto int iDigit=0,iFreq=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        iDigit=iNo%10;
      if(iDigit==4)
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

    iRet=Check4Freq(iValue);
    printf("Frequency of 4 in number\t%d",iRet);
    return 0;
}