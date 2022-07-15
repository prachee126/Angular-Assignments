#include<stdio.h>

void DispDigit(int no)
{
    
   if(no!=0)
   {
        printf("%d\t",no%10);
        no=no/10;
        DispDigit(no); 
   }
    
}

void DisplayR()
{
 static int n=0;
    if(n<4)
    {
        printf("*\t");
        n++;
        DisplayR();     //Recursive call
    }
}


int main()
{
    DispDigit(362);
     DisplayR();
    return 0;
}