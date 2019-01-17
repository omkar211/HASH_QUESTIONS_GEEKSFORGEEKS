#include<iostream>
#include<vector>
using namespace std;
int count_divisible(vector<int>&a)
{
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]%a[j]==0 || a[j]%a[i]==0)
            count++;
    }
    return count;
}
int main()
{
    vector<int>V={1,2,3,9};
    cout<<count_divisible(V);
}
