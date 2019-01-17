#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int  distance(vector<int>&V,unordered_map<int,int>&um)
{
   int n=V.size();
   int temp=INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(um[V[i]]!=0)
       {
         int  d=i-um[V[i]];
           temp=max(temp,d);
       }
       else
        um[V[i]]=i;
   }
   return temp;
}
int main()
{
    vector<int>V={3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
    unordered_map<int,int>um;
   cout<<distance(V,um);

}
