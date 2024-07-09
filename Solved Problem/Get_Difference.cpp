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
void diff_mx_mn(node* head){
    node* tmp=head;
    int mx=INT_MIN, mn=INT_MAX;
    while(tmp!=NULL){
        if(tmp->val > mx){
            mx=tmp->val;
        }
        if(tmp->val < mn){
            mn=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<mx-mn;
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
    diff_mx_mn(head);
    return 0;
}