#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int sum(vector<int>&V,unordered_map<int,int>&um)
{
    int temp=0;
    for(int i=0;i<V.size();i++)
    {
        um[V[i]]=V[i];
        temp+=V[i];
    }
        return temp;
}
int main()
{
    vector<int>V={1, 5, 3, 8};
        vector<int>v={5, 1, 8, 3};

    int n=v.size();
    unordered_map<int,int>um;
   int temp=sum(V,um);
    for(int i=0;i<n;i++)
    {
        if(um[v[i]]==v[i])
        {
            temp-=v[i];
        }
        else
            temp+=v[i];
    }
    cout<<temp<<" ";
}
