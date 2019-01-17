#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
class Queue{
public:
    node*r;
    node*f;
    int count=0;
    Queue()
   {
       r=NULL;
       f=NULL;
   }

    void push(int d)
    {
        if(r==NULL)
        {
           f=r=new node(d);
            count++;
            return;
        }
      r->next=new node(d);
      count++;
    }
    void pop()
    {
        if(count<1)
        {
           return;
        }
        node*temp=f;
        f=f->next;
        delete temp;
        count--;

    }
    bool IsEmpty()
    {
        return count==0;
    }

};
int main()
{

}
