#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next=NULL;
    node* prev=NULL;
    node(int val){
        this->next=NULL;
        this->prev=NULL;
        this->val=val;
    }
};
void insert(node* &head, node*&tail, int v){
    node*newnode=new node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void palindom(node* head, node* tail){
    node* i=head;
    node* j=tail;
    int flag=1;
    while(i->next!=j && i!=j){
        if(i->val!= j->val){
            flag=0;
            break;
        }
        i=i->next;
        j=j->prev;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
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
    palindom(head,tail);
    return 0;
}