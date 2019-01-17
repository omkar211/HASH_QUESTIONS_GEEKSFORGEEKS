#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void getMaxOccuring(char*str)
{
    unordered_map<char,int>um;
    int n=sizeof(str);
    for(int i=0;i<n;i++)
      um[str[i]]++;
      int temp=0;
      char p;
      int d=0,k=0;
      for(auto it=um.begin();it!=um.end();it++)
        if(it->second>d)
        {
            p=it->first;
            k=it->second;
        }
        cout<<p<<"->"<<k;
}
int main()
{
    char str[]="test";
    getMaxOccuring(str);
}
