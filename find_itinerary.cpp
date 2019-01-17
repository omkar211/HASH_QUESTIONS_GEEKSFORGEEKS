#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

class city{
public:
    string str1;
    string str2;
};

void find_(city*str,unordered_map<string ,string>&um)
{
    int n=4;
    for(int i=0;i<n;i++)
        um[str[i].str1]=str[i].str2;


}

int main()
{
    city str[] ={{"Chennai","Banglore"},
                {"Bombay","Delhi"},
                {"Goa","Chennai"},
                {"Delhi","Goa"}};


        unordered_map<string,string>um;
        find_(str,um);
        set<string>V;
        ///set<string>::iterator itr;
        int n=4;

        for(int i=0;i<n;i++)
        V.insert(str[i].str1);

        string src;

        for( auto it=V.begin();it!=V.end();it++)
        {

           if(*it!=um[*it]){
            src=*it;

             break;
              }
        }
        for(int i=0;i<n;i++)
        {
            cout<<src<<"->"<<um[src]<<endl;
            src=um[src];


        }

}

