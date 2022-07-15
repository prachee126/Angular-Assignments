//ARMSTRONG
//1634
//1^4+6^4+3^4+4^4=1634
#include<stdio.h>
#include<stdbool.h>

bool CheckAmstrong(int iNo)
{
    auto int  iTemp1=iNo,power=1;
    auto int iSum=0;
    register int iCnt=0,j=0;
    auto int iDigit=0;
    while(iNo!=0)
    {
        iCnt++;//digits
        iNo=iNo/10;
    }
    iNo=iTemp1;

         while(iNo!=0)
        {
            power=1;
            iDigit=iNo%10;
    
         for(j=1;j<=iCnt;j++)
        {
            power=power*iDigit;
        }
            iSum=iSum+power;
            iNo=iNo/10;
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