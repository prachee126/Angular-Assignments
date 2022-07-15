#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    private:
            int count;

    public:
        struct node<T> *head;

    SinglyLL();
    void InsertFirst(T dt);
    void Display();

};
template <class T>
SinglyLL<T>::SinglyLL()
{
    head=NULL;
    count=0;
}
template <class T>
void SinglyLL<T>::InsertFirst(T dt)
{
    struct node<T> *newn=new node<T>;
    newn->data=dt;
    newn->next=NULL;
    if(head==NULL)
    {
        head=newn;

    }
    else
    {
        newn->next=head;
        head=newn;
    }
    count++;
}
template<class T>
void SinglyLL<T> ::Display()  
{
    struct node <T>*temp=head;
    for(int i=1;i<=count;i++)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    SinglyLL <int>obj1;
    SinglyLL <float>obj2;
    SinglyLL <char>obj3;
    obj1.InsertFirst(21);
     obj1.InsertFirst(11);
      obj1.InsertFirst(51);
    obj1.Display();

    obj3.InsertFirst('a');
    obj3.InsertFirst('n');
    obj3.InsertFirst('p');
    obj3.Display();
    return 0;
}