#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void subset(unordered_map<int,int>&um , vector<int>&v)
{
    int s=v.size();
    for(int i=0;i<s;i++)
    {
        um[v[i]]=v[i];
    }
}
int main()
{
    vector<int>v{11,1,13,21,3,7};
    vector<int>V{11,3,7,1};

        unordered_map<int,int> um;
        subset(um,v);
    int n=V.size();

    int temp=true;

    for(int i=0;i<n;i++)
    {
        if(um[V[i]]!=V[i])
        {
            temp=false;
            break;

        }
    }
    if(temp)
        cout<<"yes a subset"<<endl;
    else
        cout<<"not a subset"<<endl;
}

