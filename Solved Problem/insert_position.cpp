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
void print(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_tail(node* &head, int v){
    node* newnode=new node(v);
    if(head==NULL){
        head=newnode;
        return;
    }
    node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void insert_pos(node* &head, int p, int v){
    node* newnode=new node(v);
    if(p==0){
        newnode->next=head;
        head=newnode;
        print(head);
        cout<<endl;
    }
    else{
        node* tmp=head;
        for(int i=1; i<=p-1; i++){
            tmp=tmp->next;
            if(tmp==NULL){
                cout<<"Invalid"<<endl;
                return;
            }
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
        print(head);
        cout<<endl;
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
        insert_tail(head,v);
    }
    int q; cin>>q;
    while(q--){
        int p,v;
        cin>>p>>v;
        insert_pos(head,p,v);
    }
    return 0;
}