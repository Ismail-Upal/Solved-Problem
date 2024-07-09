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
void print(node* head){
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void printrev(node* tail){
    node* tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(node* head){
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert(node* &head, node* &tail, int x, int v){
    size(head);
    node* newnode=new node(v);
     node* tmp=head;
    if(head==NULL){
        head=newnode;
        tail=newnode;
        print(head);
        printrev(tail);
    }
   
    else if(x==0){
        newnode->next=tmp;
        tmp->prev=newnode;
        head=newnode;
        print(head);
        printrev(tail);
    }
    else if(x>size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(x==size(head)){
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        print(head);
        printrev(tail);
    }
    else{
        for(int i=1; i<=x-1; i++){
            tmp=tmp->next;
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
        newnode->next->prev=newnode;
        newnode->prev=tmp;
        print(head);
        printrev(tail);
    }
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
        insert(head,tail,x,v);
        
        
        
    }
    return 0;
}