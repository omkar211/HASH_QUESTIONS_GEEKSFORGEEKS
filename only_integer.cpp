#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void only_integer(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        if(V[i]>0 && um[V[i]]!=-1)
           um[V[i]]++;
        else
        um[-V[i]]=-1;
    }
}
int main()
{
    vector<int>V={1,8,-6,-1,6,8,8};
    unordered_map<int,int>um;
    only_integer(V,um);
    for(auto it=um.begin();it!=um.end();it++)
    {
        if(it->second>1)
            cout<<it->first<<endl;
    }
}
