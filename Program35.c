//1634
//1^4+6^4+3^4+4^4=1634
#include<stdio.h>
#include<stdbool.h>
#include"Header34.h"
bool CheckAmstrong(int iNo)
{
    auto int  iTemp1=iNo;
    ULI iSum=0;
    register int iCnt=0,i=0;
    int iMult=1,iDigit=0;
    while(iNo!=0)
    {
        iCnt++;//digits
        iNo=iNo/10;
    }
    iNo=iTemp1;

    for(i=1;i<=iCnt,iNo!=0;i++)
    {
         while(iNo!=0)
        {
            iDigit=iNo%10;
            
            iSum=iSum+FindPower(iDigit,iCnt);
            iNo=iNo/10;
            
        }
        
    }
     if(iSum==iTemp1)
     {
         return true;
     }
        
        else
        {
            return false;
        }
}


int main()
{
    auto int iValue1=0;
    auto bool iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
  
    iRet=CheckAmstrong(iValue1);
    if(iRet==true)
    {
        printf("yess");
    }
    else
     printf("false");   
   
    return 0;
}