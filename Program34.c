#include "Header34.h"
int main()
{
    auto int iValue1=0,iValue2=0;
    auto ULI iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter power\n");
    scanf("%d",&iValue2);
    iRet=FindPower(iValue1,iValue2);
    if(iRet==-1)
    {
        printf("you entered 0 please enter valid number\n");
    }
    else
     printf("Power:\t%u",iRet);    //long decimal
   
    return 0;
}