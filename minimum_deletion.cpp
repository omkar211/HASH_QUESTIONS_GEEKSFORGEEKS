#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void mini(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        um[V[i]]++;
    }
}
int main()
{
    vector<int>V={1,1,1,1,1};
    unordered_map<int ,int>um;
    mini(V,um);

    int count=0;
    for(auto it=um.begin();it!=um.end();it++)
    {
        count=max(count,it->second);
    }
    cout<<V.size()-count;
}
