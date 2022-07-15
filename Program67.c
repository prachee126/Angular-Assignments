//Singly Linear Linked List


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
    //Allocate the memory i.e. object creation
    //initialize the node i.e. object
    //check wether empty LL or not
    
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
void Display(PNODE head)
{
    while (head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    
}

int main()
{
    PNODE First=NULL;  //struct node * first//not initialized to any object
     InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    Display(First);
    return 0;
}
