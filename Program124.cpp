#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>

void DisplayMan(char *name)
{
    if(strcmp(name,"ls")==0)
    {
        printf("Description:\tTo list All files form current dir\n");
        printf("Command:\tls\n");

    }
    else
    if(strcmp(name,"open")==0)
    {
        printf("Description:\tTo Open file according to name\n");
        printf("usage:\topen filename\n");
    }
    else
    if(strcmp(name,"create"))
    {
        printf("Description: used to create new regular file\n");
		printf("Usage: create filename permission");
    }
    

}


int main()
{
    int count=0;
    char str[80];
    char command[4][80];

    while(1)
    {
        printf("Enter command\n");
        fflush(stdin);
        strcpy(str," ");
        fgets(str,80,stdin);
        count=sscanf("%s%s%s%s",command[0],command[1],command[2],command[3]);
        if(count==2)
        {
            if(strcmp(command[0],"man")==0)
            {
                printf("hello");
                DisplayMan(command[1]);
            }

        }      
        break;
    }
    return 0;
}