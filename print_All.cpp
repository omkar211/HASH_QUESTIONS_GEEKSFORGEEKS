#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    vector<int>V={12, 10, 9, 45, 2, 10, 10, 45};
    set<int>um;
    int n=V.size();
    for(int i=0;i<n;i++)
        um.insert(V[i]);
    for(auto it=um.begin();it!=um.end();it++)
        cout<<*it<<"->";
}
