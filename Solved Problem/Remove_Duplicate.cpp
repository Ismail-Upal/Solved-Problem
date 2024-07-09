#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next=NULL;
    node(int val)
    {
        this->next=NULL;
        this->val=val;
    }
};
void insert(node* &head, int v){
    node* newnode=new node (v);
    if(head==NULL){
        head=newnode;
        return;
    }
    node*tmp =head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void delete_node(node* &head, int v){
    node*tmp2=head;
    while(tmp2->next!=NULL){
        if(tmp2->next->val==v){
            node* deletenode=tmp2->next;
            tmp2->next=tmp2->next->next;
            delete deletenode;
        }
        else{
            tmp2=tmp2->next;
        }
    }
}
void duplicate(node* &head){
    node*tmp=head;
    while(tmp!=NULL){
        delete_node(tmp,tmp->val);
        tmp=tmp->next;
    }
}

void prin(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    node* head=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head,v);
    }
    duplicate(head);
    prin(head);
    return 0;
}