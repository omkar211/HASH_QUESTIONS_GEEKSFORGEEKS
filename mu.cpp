#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void greatest_product(vector<int>&V,unordered_map<int,int>&um)
{
    int n=V.size();
    for(int i=0;i<n;i++)
        um[V[i]]=V[i];
}
int main()
{
    vector<int>V={10,3,4,30,35};
    unordered_map<int,int>um;
    greatest_product(V,um);
    int n=V.size();
    for(int i=0;i<n-1;i++)
    {
        int product=V[i]*V[i+1];
        if(um[product]==product)
            cout<<product<<endl;

    }
}
