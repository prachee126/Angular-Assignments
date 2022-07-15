#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);        //insertfirst
        void Pop();         //deletefirst
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next=Head;
    Head=newn;
    Count++;
}
template<class T>
void Stack<T>::Pop()        //delete first
{
    if(Count==0)
    {
        cout<<"Stack is empty"<<endl;
        return ;

    }
    else
    if(Count==1)
    {
        T temp=Head->data;
        delete(Head);
        Head=NULL;
        cout<<"removed element: "<<temp<<endl;
    }
    else
    {
        struct node<T>*temp=Head;
        Head=Head->next;
        T te=temp->data;
        delete(temp);
        cout<<"removed element: "<<te<<endl;
    }
    Count--;
}
template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Linked list are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    char n;
    Stack<char> qobj;
    qobj.Push('a');
    qobj.Push('b');
    qobj.Push('c');
    qobj.Push('d');
    
    
    qobj.Display();
    qobj.Pop();
    qobj.Pop();
    qobj.Pop();
    qobj.Pop();
     qobj.Pop();
    return 0;
}