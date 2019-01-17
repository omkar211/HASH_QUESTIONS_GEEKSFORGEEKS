#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void smallest_element(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
        um[V[i]]++;
}
int main()
{
    vector<int>V={2, 1, 3, 1, 2, 2};
     int k=3;
    unordered_map<int,int>um;
    smallest_element(V,um);
    int n=V.size();
      int d=INT_MAX;
    for(auto it=um.begin();it!=um.end();it++)
        if(k==it->second && it->first<d)
            d=it->first;
    cout<<d;

}
