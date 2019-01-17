#include<iostream>
#include<stack>
using namespace std;
void next_greater(int *a,int n)
{
      stack<int>S;
      S.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if(S.empty())
        {
            S.push(a[i]);
            continue;
        }
       while(!S.empty() && S.top()<a[i])
       {
         cout<< S.top()<<" -----> "<<a[i]<<endl;
           S.pop();
       }
       S.push(a[i]);
    }
    while(!S.empty())
    {
        cout<<S.top()<<" ----- >"<<-1<<endl;
        S.pop();
    }
}
int main(){
int n;
     cin>>n;
    cout<<"enter the array"<<endl;
   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    next_greater(a,n);
}
