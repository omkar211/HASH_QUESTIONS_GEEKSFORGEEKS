#include<iostream>
#include<set>
#include<vector>
using namespace std;
void check(vector<int>&V,set<int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
       um.insert(V[i]);
    }
}
int main()
{
    vector<int>V={-1,-2,4,-6,5,7};
    vector<int>v={6,3,4,0};
    int x=8;
    set<int>um;
    check(V,um);
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(um.find(x-v[i])!=um.end())
        {
            cout<<"("<<v[i]<<","<<x-v[i]<<")"<<endl;
        }
    }

}
