#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>um;

    ///inserting  values by using [] operator
    um["PI"]=3.14;
    um["root2"]=1.414;
    um["root3"]=1.732;
    um["log10"]=2.302;
    um["loge"]=1.0;
    ///inserting value by insert function
    um.insert(make_pair("e",2.718));
    string key="loge";
    if(um.find(key)==um.end())
        cout<<key<<"not found \n";
    else
        cout<<" found "<<key<<"\n";

    key="lambda";
    if(um.find(key)==um.end())
        cout<<" found "<<key<<endl;
    else
        cout<<"found"<<key<<endl;

    cout<<"\nAll Elements : \n";
    for(auto it= um.begin();it!= um.end();it++)
    {
        cout<<it->first<<"  " <<it->second<<endl;
    }

}
