#include<iostream>
#include<set>
#include<vector>
using namespace std;
void pair_positive(vector<int>&V,set<int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
    {
        um.insert(V[i]);

    }
    for(auto it=um.rbegin();it!=um.rend();it++)
    {
            if(*it<0 && um.find(-*it)!=um.end())
                cout<<*it<<" "<<-*it<<"->";
    }
}
int main()
{
    vector<int>V={4, 9, -4, 1, -1, -8,8, -9 };
   set<int>um;
    pair_positive(V,um);
}
