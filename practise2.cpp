#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void printFrequency(string str)
{
    unordered_map<string,int>um;
    stringstream ss(str);
    string word;
    while(ss>>word)
        um[word]++;

    unordered_map<string,int>::iterator p;
    for(p = um.begin();p!=um.end();p++)
    {
        cout<<"("<<p->first<<","<<p->second<<")"<<endl;
    }
}
int main()
{
    string str="geeks for geeks geeks quiz"
                " practise qa for";
   printFrequency(str);
   return 0;
}
