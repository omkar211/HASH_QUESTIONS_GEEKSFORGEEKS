#include<iostream>
#include<unordered_map>
using namespace std;
#define r=4
#define c=4
void permu(int *mat,unordered_map<int,int>&um,int row)
{
    for(int i=0;i<c;i++)
    {
      um[mat[row][c]]=mat[row][c];
    }
}
int main()
{
    int  mat[][] = {{3, 1, 4, 2},
                   {1, 6, 9, 3},
                   {1, 2, 3, 4},
                   {4, 3, 2, 1}};

unordered_map<int,int>um;
int row=3;
permu(mat,um,row);
}
