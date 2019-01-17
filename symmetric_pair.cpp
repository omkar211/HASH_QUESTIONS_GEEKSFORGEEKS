#include<iostream>
#include<unordered_map>
#include<vector>
void findSymPairs(int arr[][2],int row)
{
    unordered_map<int,int>hm;
    for(int i=0;i<row;i++)
    {
        int first =arr[i][0];
        int sec = arr[i][1];

        if(hm.find(sec)!=h.end()&&hm[sec]==first)
            cout<<"("<<sec<<", "<<first<<")"<<endl;
        else
            hm[first]=sec;
    }
}
int main()
{
    int arr[5][2];
    arr[0][0]=11;arr[0][1]=20;
    arr[1][0]=30; arr[1][1]=40;
    arr[2][0]=5; arr[2][1]=10;
    arr[3][0]=40; arr[3][1]=30;
    arr[4][0]=10;arr[4][1]=5;
    findSymPairs(arr,5);

}
