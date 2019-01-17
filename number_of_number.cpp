#include<iostream>
#include<unordered_map>
using namespace std;
class employee{

public:
    string  emp;
    string mngr;
};
void number_of_employee(employee*arr,int n,unordered_map<string,int>&um)
{
    for(int i=0;i<n;i++)
    {
        if((um.find(arr[i].emp)!=um.end()))
        {
            if(arr[i].emp!=arr[i].mngr)
            {
                um[arr[i].mngr] += um[arr[i].emp]+1;
            }
        }
        else
        {
            um[arr[i].emp]=0;
            um[arr[i].mngr]++;
        }
     }
}
int main()
{
    int n=6;
  employee arr[]={{"A","C"},
                  {"B","C"},
                  {"C","F"},
                  {"D","E"},
                  {"E","F"},
                  {"F","F"}};

unordered_map<string,int>um;
number_of_employee(arr,n,um);

for(auto it=um.begin();it!=um.end();it++)
{
    cout<<it->first<<"->"<<it->second<<endl;
}
}
