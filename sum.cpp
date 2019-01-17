#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
#define MAX 100000
void pair_sum(vector<int>&V,int x)
{
    bool a[MAX] = {0};
    for(int i=0;i<V.size();i++)
    {
        a[V[i]]=true;
    }
 for(int i=0;i<V.size();i++)
 {
     int d =x-V[i];
     if(a[d])
     {
         cout<<V[i]<<" , "<<d<<endl;
     }
 }

}
int main()
{
    vector<int>V={1,4,45,10,6,8};
    int x=16;
    pair_sum(V,x);
}
