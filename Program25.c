#include<stdio.h>
void DisplayEvenDigits(int iNo)
{
    int i=0;
    for ( i = 0; i <= iNo; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter numnber\n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);


    return 0;
}