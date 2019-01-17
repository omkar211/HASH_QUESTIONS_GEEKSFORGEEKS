#include<iostream>
#include<queue>
#include<stack>
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
    /// width of tree
    void width(node*root)
    {
        if(root==NULL)
        {
            return;
        }
        int i=1,count=0;
        queue<node*>q;
        stack<node*>s;
        q.push(root);
        while(!q.empty())
        {
         while(!q.empty())
         {
           s.push(q.front());
           q.pop();
           count++;
         }
         cout<<"level "<<i<<"---->"<<count<<endl;
         count=0;
         i++;
         while(!s.empty())
         {
             node*temp=s.top();
             s.pop();
             if(temp->left!=NULL)
             {
                 q.push(temp->left);
             }
             if(temp->right!=NULL)
             {
                 q.push(temp->right);
             }
         }
    }
    }
    ///find sub_tree
    bool check(node*t,node*s)
    {
        if(t==NULL or s==NULL)
            return true;

        if(t==NULL ||s==NULL)
        {
            return false;
        }
       return (t->data == s->data   &&
            check(t->left, s->left) &&
            check(t->right, s->right) );
    }

    bool Sub_tree(node*t,node*s)
    {
        if(t==NULL)
        {
            return true;
        }

        if(check(t,s))
        {
            return true;
        }
        return Sub_tree(t->left,s) && sub_tree(t->right,s);
    }
    ///printAncestor
    bool printAncestor(node*root,int k)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->data==k)
            return true;

        if(printAncestor(root->left,k) || printAncestor(root->right,k))
        {
             return true;
        }

        return false;
    }
    ///postorder without recursion
    void postorder(node*root)
    {
        stack<node*>s;
        while(root!=NULL or !s.empty())
        {
        while(root!=NULL)
        {

            if(root->right!=NULL)
            {
                s.push(root->right);
           }
           s.push(root);
            root=root->left;
        }
        root=s.top();
        s.pop();
        if( !s.empty() and root->right!=NULL and s.top()==root->right)
        {
            s.pop();
            s.push(root);
            root=root->right;
        }
        else
        {
            cout<<root->data<<"->";
            root=NULL;
        }
      }
    }
    ///inorder without recursion
    void Inorder(node*root)
    {
        stack<node*>s;
        while(root!=NULL or !s.empty())
        {
            while(root!=NULL)
            {
                s.push(root);
                root=root->left;
            }
            root=s.top();
            cout<<root->data<<"->";
            s.pop();
            root=root->right;
        }

    }
    ///preorder without recursion
    void preorder(node*root)
    {
     stack<node*>s;
     while(root!=NULL or !s.empty())
     {
        while(root!=NULL)
        {

            cout<<root->data<<" ";
            s.push(root);
            root=root->left;
        }

      root=s.top();
      s.pop();
        root=root->right;

     }
    }
    void post_order(node*root)
    {
        if(root==NULL)
            return;
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<"->";
    }
    void In_order(node*root)
    {
        if(root==NULL)
            return;
        In_order(root->left);
        cout<<root->data<<"->";
        In_order(root->right);
    }
  void pre_order(node*root)
  {
      if(root==NULL)
      {
          return;
      }
      cout<<root->data<<"->";
      pre_order(root->left);
      pre_order(root->right);
  }
  void binary_tree(node*&root)
    {
        int d;
        cin>>d;
        if(root==NULL)
        {
            root=new node(d);
        }
        int d1,d2;
        queue<node*>q;

        q.push(root);
        while(!q.empty())
        {
            node*f=q.front();
            cout<<endl<<"enter the children of :- "<<f->data<<endl;
            q.pop();
            cin>>d1;
            cin>>d2;
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
        return ;
    }

int main()
{
  node*root=NULL;
  binary_tree(root);
  cout<<endl<<"pre_order"<<endl;
  pre_order(root);
  cout<<endl<<"In_order"<<endl;
  In_order(root);
  cout<<endl<<"post_order"<<endl;
  post_order(root);
  cout<<endl<<"preorder without using recursion"<<endl;
  preorder(root);
  cout<<endl<<"Inorder without using recursion"<<endl;
  Inorder(root);
  cout<<endl<<"postorder without using recursion"<<endl;
  postorder(root);
  cout<<endl<<"print Ancestor"<<endl;
  /* if(printAncestor(root,5))
   {
       cout<<"yes found!";
   }
   else
   {
       cout<<"not found!";
   }*/
   width(root);
}

