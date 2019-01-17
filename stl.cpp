#include<iostream>
#include<unordered_map>
#include<utility>
using namespace std;
int main()
{
    unordered_map<string,string> h;
    h["mango"]="50/kg";

   cout<<h["mango"];

}
