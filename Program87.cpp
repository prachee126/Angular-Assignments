#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
    public:
        struct node<T> *Head;
        int Count;

        Queue();
        void Enqueue(T);        //insertlast
        void Dqueue();         //deletefirst
        void Display();
        int CountNode();
};

template<class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct node<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}
template<class T>
void Queue<T>::Dqueue()        //delete first
{
    if(Count==0)
    {
        cout<<"Queue is empty"<<endl;
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
void Queue<T>::Display()
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
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
    int n=0;
    Queue<int> qobj;
    for(int i=1;i<4;i++)
    {
        cout<<"enter element";
        cin>>n;
         qobj.Enqueue(n);
    }
    
    qobj.Display();
    qobj.Dqueue();
    qobj.Dqueue();
    qobj.Dqueue();
    qobj.Dqueue();

    return 0;
}