//Prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int i=0;
    for ( i = 2; i<=iNo/2; i++)
    {
        if(iNo%i==0)            
        {
            break;          
        }
    }
    if(i==((iNo/2)+1))      //Optimization 
    {
        return true;    // prime
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue=0;
    bool bRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("Prime");
    }
    else if(bRet==false)
    {
        printf("NOT PRIME");
    }
    return 0;
}