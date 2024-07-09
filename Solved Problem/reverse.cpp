#include<bits/stdc++.h>
using namespace std;
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
void insert(node* &head, node*&tail, int v){
    node* newnode=new node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse(node* head,node* tail){
    node* i=head;
    node* j=tail;
    while(i->next!=j && i!=j){
        swap(i->val, j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val, j->val);
}
void print(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
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
    reverse(head,tail);
        print(head);
    return 0;
}