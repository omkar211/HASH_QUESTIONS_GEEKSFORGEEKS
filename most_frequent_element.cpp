#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
using namespace std;
void duplicate(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        um[V[i]]++;
    }
}
int main()
{
    vector<int>V={2,3,4,5,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,1,5};
    unordered_map<int,int>um;
    duplicate(V,um);
    int count=0;
    int temp;
    for(auto it=um.begin();it!=um.end();it++)
          if(count<it->second)
          {
              count=it->second;
               temp=it->first;
          }
          cout<<temp;
}
