#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class treeNode{
public:
    int data;
    treeNode*left,*right;

    treeNode(int d):data(d),left(NULL),right(NULL){}
};
void traverseTree(treeNode*root,unordered_map<int,vector<int>>&um,int d=0)
{
    if(root==NULL)
        return;
    um[d].push_back(root->data);
    traverseTree(root->left,um,d-1);
    traverseTree(root->right,um,d+1);
}
int main()
{
    treeNode*root=NULL;
    root=new treeNode(1);
    root->left=new treeNode(2);
    root->right=new treeNode(3);
    root->left->left=new treeNode(4);
    root->left->right=new treeNode(5);
    root->right->right=new treeNode(6);
    root->right->left=new treeNode(7);
    root->right->right->left=new treeNode(8);
    root->right->right->right=new treeNode(9);

    unordered_map<int,vector<int>>um;
    traverseTree(root,um);
    int min_key=INT_MAX;
    int max_key=INT_MIN;
    for(auto it=um.begin();it!=um.end();it++)
    {
        min_key=min(min_key,it->first);
        max_key=max(max_key,it->first);
    }
    for(int i=min_key;i<=max_key;i++)
    {
        for(int j=0;j<um[i].size();j++)
            cout<<um[i][j]<<" ";
        cout<<endl;
    }

}
