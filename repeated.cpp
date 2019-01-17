#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void duplicate(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        if(um[V[i]]==V[i])
        {
           cout<<V[i]<<" ";
        }
        else
            um[V[i]]=V[i];
    }

}
int main()
{
     vector<int>V={1,2,3,4,5,1};
     unordered_map<int,int>um;
     duplicate(V,um);

}
