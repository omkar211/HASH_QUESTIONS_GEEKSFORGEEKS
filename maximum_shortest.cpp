#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void max_distance(vector<int>&V,unordered_map<int ,int>&um)
{
    int n=V.size();
     for(int i=0;i<n;i++)
        if(i)
        um[V[i]]=i;
}
int main()
{
    vector<int>V;
    int k;
    unordered_map<int,int>um;
    max_distance(V,um);
    for(int i=0;i<n;i++)
    {
        if(V[i]+um[k-V[i]]==k)

    }
}
