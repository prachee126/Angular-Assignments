#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool CheckVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
    || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
       return TRUE;
    }
    else
    {
       return FALSE;
    }    
}



int main()
{
    char ch='\0';
    bool bRet=false;
    printf("Enter character\n");
    scanf("%c",&ch);
   // printf("%c",ch);
    
    bRet=CheckVowel(ch);
    if(bRet==true)
    {
         printf("Vowel\n");
    }
    else
    {
         printf("Not");
    }
}