//power
//input=2 4, 4 3
//output= 2*2*2*2, 4*4*4
/*p=1*2
p=2*2
p=4*2
p=8*2
p=16*/

typedef unsigned long int ULI; 
#include<stdio.h>

//unsigned for +ve 
ULI FindPower(int iNo1,int iNo2)
{
    //long is data type modifier
  ULI power=1;    //jumboglass
    register int i=0;   //frequently need of iCnt

    if(iNo1==0 || iNo2==0)
    {
        return -1;
    }    
    for(i=1;i<=iNo2;i++)
    {
        power=power*iNo1;
    }
    
    return power;
}

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