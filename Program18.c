//Reverse the number & return it
//70 i want to add 3 at the end then
//70*10+3=703
//48 i want to add 3 at the end then
//48*10+9=489

#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while (iNo>0)
    {
        iDigit=iNo%10;
         iRev = iRev*10+iDigit; 
        iNo=iNo/10;
    }
    return iRev;
    
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=ReverseNumber(iValue);
    printf("ReverseNumber:\t%d",iRet);
    return 0;
}
