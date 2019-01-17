#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void two_array(vector<int>&V , unordered_map<int,int>&um)
{
    for(int i=0;i<V.size();i++)
        um[V[i]]=V[i];
}
int main()
{
    vector<int>V={1, 2, 5, 4, 0};
         vector<int>v = {2, 4, 5, 0, 1};
    unordered_map<int,int>um;
    int n1=V.size();
    int n2=v.size();
    if(n1!=n2)
        return 0;
     two_array(V,um);
     bool temp=true;
     for(int i=0;i<n1;i++)
     {
       if(um[v[i]]!=v[i])
       {
           temp=false;
           break;
       }
       n2--;
     }
     if(temp and n2<=0)
        cout<<"sab badiya hai "<<endl;
        else
            cout<<"galat hai"<<endl;
}
