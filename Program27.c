#include<stdio.h>
void ChangeCase(char ch)
{
    if(ch>64 && ch<=90)
    {
        ch=ch+32;
    }
    else
    {
        if(ch>96 && ch<121)
        {
            ch=ch-32;
        }
    }
     printf("%c",ch);
}



int main()
{
    char ch='\0';
    printf("Enter character\n");
    scanf("%c",&ch);
   // printf("%c",ch);
    ChangeCase(ch);
}