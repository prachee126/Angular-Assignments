//Check Prime Using flag
#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
    int i=0;
    bool flag=true;
    if (iNo<0)
    {
        /* code */
        iNo=-iNo;
    }
    
     for(i=2;i<=(iNo/2);i++)
    {   
        if(iNo%i==0)
        {
            flag=false;     //factor found
            break;
        }
       
    }
    return flag;
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
        if(bRet==false)
        {
            printf("%d is not prime\n",iValue);
        }
        else
        {
            printf("%d is prime\n",iValue);
        }
    }
}