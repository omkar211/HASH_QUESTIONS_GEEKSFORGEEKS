#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool sum_is_divisible(int k,vector<int>&V,unordered_map<int,int>&um)
{

    int n=V.size();
    if(n&1)
    {
         return false;
    }
    for(int i=0;i<n;i++)
    {
        um[V[i]%k]++;
    }
    for(int i=0;i<n;i++)
    {
        int rem=V[i]%k;
        if(rem==0 && um[rem]%2!=0)
        {
           return false;
        }
        if(rem*2==k && um[rem]%2!=0)
        {
            return false;
        }
        if(um[rem]!=um[k-rem])
        {
               return false;
        }
    }
    return true;

}
int main()
{
    vector<int>V={11,7,5,3};
    int k=6;
    int n=V.size();
    unordered_map<int,int>um;
    if(sum_is_divisible(k,V,um))
    {
        cout<<"true"<<endl;
    }
    else
        cout<<"false";
}
