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
void sortlist(node* head){
    node* tmp=head;
    for(node* i=tmp; i->next!=NULL; i=i->next){
        for(node* j=i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
            
        }
    }
    
}
void print(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
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
    sortlist(head);
   print(head); 
    return 0;
}