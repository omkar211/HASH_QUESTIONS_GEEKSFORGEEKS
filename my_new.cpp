#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
int data;
node*left;
node*right;

node(int d)
{
    data=d;
    left=NULL;
    right=NULL;
}
};
/// print binary tree
void print(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<"->";
    print(root->left);
    print(root->right);
}
void Insert(node*&root)
{
    int d1,d2;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*f=q.front();
        q.pop();
        cin>>d1>>d2;
        if(d1!=-1)
        {
            f->left=new node(d1);
            q.push(f->left);
        }
        if(d2!=-1)
        {
            f->right=new node(d2);
            q.push(f->right);
        }
    }

}
void binary(node*&root)
{
    int d;
    cin>>d;
    root=new node(d);
    Insert(root);
}
int main()
{
   node*root=NULL;
   binary(root);
   print(root);
}
