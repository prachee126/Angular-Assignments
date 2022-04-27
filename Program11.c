//Check Prime
#include<stdio.h>
//Check Prime

#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int i=0,fact=0;
    if (iNo<0)
    {
        /* code */
        iNo=-iNo;
    }
    
     for(i=2;i<=(iNo/2);i++)
    {   
        
        if(iNo%i==0)
        {
            fact++;
        }
        if(fact)
        {
            break;
        }
    }
    if(fact>0)
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
    int iValue=0,iRet=0;
    bool bRet=false;

    printf("Enter number\n");
    scanf("%d",&iValue);
    if(iValue==1)
    {
        printf("1 is not prime nor composite");
    }
    else
    {
        bRet=CheckPrime(iValue);
        if(bRet==true)
        {
            printf("%d is not prime\n",iValue);
        }
        else
        {
            printf("%d is prime\n",iValue);
        }
    }
}