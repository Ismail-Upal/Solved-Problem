#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->next=NULL;
        this->val=val;
    }
};
void insert(node* &head, node* &tail, int v){
    node* newnode=new node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(node* head, int x){
    node* tmp=head;
    int p=0,flag=0;
    while(tmp!=NULL){
        if(tmp->val != x){
            p++;
            tmp=tmp->next;
        }
        else if(tmp->val ==x){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<p<<endl;
    else cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        node* head=NULL;
    node* tail=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head,tail,v);
    }
    int x;
    cin>>x;
    print(head,x);
    }
    return 0;
}