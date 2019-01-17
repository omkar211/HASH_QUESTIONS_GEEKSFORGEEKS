#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void pair_sum(vector<int>&v,unordered_map<int,int>&um)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int d=n-i-1;
        if(um[v[i]]>d)
        um[v[i]]=d;
        else

    }
}
int main()
{
    vector<int>v={};
    unordered_map<int,int>um;
    pair_sum(v,um);
}
