//number is Palindrome or not
//70 i want to add 3 at the end then
//70*10+3=703
//48 i want to add 3 at the end then
//48*10+9=489

#include<stdio.h>
#include<stdbool.h>
bool Palindrome(int iNo)
{
    
    
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iTemp=iNo;
    while (iNo>0)
    {
        iDigit=iNo%10;
         iRev = (iRev*10)+iDigit; 
        iNo=iNo/10;
    }
    
    if(iTemp==iRev)
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
    int iValue=0;
    bool bRet=false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=Palindrome(iValue);
    if(bRet==true)
    printf("palindrome");
    else
    printf("not");
    return 0;
}
