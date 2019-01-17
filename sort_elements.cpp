#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void sort_find(vector<int>&V,unordered_map<int,int>)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        um[V[i]]++;
    }
    sort<um.begin(),um.end(),compare>;
}
int main()
{
    vector<int>V={2,5,2,8,5,6,8,8};
    int n=V.size();
    unordered_map<int,int>um;
    sort_find(V,um);
}
