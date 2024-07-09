#include<bits/stdc++.h>
using namespace std;
int sz=0;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->next=NULL;
        this->prev=NULL;
        this->val=val;
    }
};
void insert_head(node*&head, node*&tail, int v){
    node* newnode=new node(v);
    sz++;
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_tail(node*&head, node*&tail, int v){
    node* newnode=new node(v);
    if(head==NULL){
        insert_head(head,tail,v);
        return;
    }
    sz++;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insert_pos(node*&head,node*&tail, int x,int v){
    node* newnode=new node(v);
    if(head==NULL){
        insert_head(head,tail,v);
        return ;
    }
    sz++;
    node* tmp=head;
    for(int i=1; i<x; i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
    if(newnode->next==NULL){
        tail=newnode;
    }
    
}
void print(node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void rev(node* tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x==0){
            insert_head(head,tail,v);
        }
        else if(x==sz){
            insert_tail(head,tail,v);
        }
        else if(x>sz){
            cout<<"Invalid"<<endl;
            continue;
        }
        else{
            insert_pos(head,tail, x, v);
            
        }
        cout<<"L -> ";
        print(head);
        cout<<"R -> ";
        rev(tail);
    }  
    return 0;
}