//check perfect
//input-> -20
//output-> 1,2,4,5,10 factors are always +ve
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
    bool flag=false;
  auto int iCnt=0,iSum=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo/2;iCnt>=1 &&(iSum<=iNo);iCnt--)      //Optimization
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
   if(iSum==iNo)
   {
       flag=true;
   }
   return flag;
   
}


int main()
{
    int iValue=0;
    bool iRet=false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=CheckPerfect(iValue);
    if(iRet==true)
    {
        printf("yess");
    }
    else
    {
        printf("no");
    }
    return 0;
}
