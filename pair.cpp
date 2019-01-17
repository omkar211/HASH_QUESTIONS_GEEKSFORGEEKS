#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void pair_chair(vector<int>&v,unordered_map<int,int>&um)
{
    int n=v.size();
    for(int i=0;i<n;i++)
     um[v[i]]=v[i];
}
int main()
{
    vector<int>v= {2, 5, 7, 8};
    unordered_map<int,int>um;
    pair_chair(v,um);
    int n=v.size();
     int temp=-1;
    for(int i=0;i<n-1;i++)
    {
        int d=v[i]*v[i+1];
        if(um[d]==d)
            temp=d;
    }
    cout<<temp;
}
