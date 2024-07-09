#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* left;
        node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* inputTree(){
    int val; cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        node* p=q.front();
        q.pop();
        int l,r; cin>>l>>r;
        node* myLeft;
        node* myRight;
        if(l==-1) myLeft=NULL;
        else myLeft=new node(l);
        if(r==-1) myRight=NULL;
        else myRight=new node(r);
        p->left=myLeft;
        p->right=myRight;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right); 
    }
    return root;
}
void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}
bool search(node* root,int x){
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}
void insert(node*& root, int x){
    if(root==NULL){
        root=new node(x);
        return;
    }
    if(x<root->val){
        if(root->left==NULL) root->left=new node(x);
        else insert(root->left, x);
    }
    else{
        if(root->right==NULL) root->right=new node(x);
        else insert(root->right, x);
    }
}
node* convert(int a[],int n, int l,int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    node* root=new node(a[mid]);
    node* leftRoot=convert(a,n,l,mid-1);
    node* rightRoot=convert(a,n,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
    return root;
}
int main()
{
    // node* root=inputTree();
    // if(search(root,4)) cout<<"Yes"<<endl;
    // else cout<<"NO"<<endl;

    // int x; cin>>x;
    // insert(root,x);
    // levelOrder(root);

    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    node* root=convert(a,n,0,n-1); 
    levelOrder(root);
    return 0;
}