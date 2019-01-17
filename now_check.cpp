#include <iostream>
#include<vector>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set <int> gquiz1;

   vector<int>V={4, 9, -4, 1, -1, -8, 8, -9 };
    int n=V.size();

    for(int i=0;i<n;i++)
    {
        gquiz1.insert(V[i]);
    }

    for (auto itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout<<*itr<<" "<<*itr<<endl;
    }

}
