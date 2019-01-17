#include<iostream>
#include<stack>
using namespace std;
void sorted_stack(stack<int>& s,int d)
{
    if(s.empty())
    {
        s.push(d);

    }
   else if(d<s.top())
   {
      // cout<<s.top()<<endl;
       int temp=s.top();
       s.pop();
       sorted_stack(s,d);
       s.push(temp);
   }
   else
    s.push(d);

   return;
}
void inserted_stack(stack<int>& s)
{
     if(s.empty())
     {
         return;
     }
     int d=s.top();
     s.pop();
     inserted_stack(s);
     sorted_stack(s,d);
}
int main()
{
    int n;
    cin>>n;
    stack<int>s;
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        s.push(d);
    }
    inserted_stack(s);
    while(!s.empty())
    {
        cout<<s.top()<<"->";
        s.pop();
    }
}
