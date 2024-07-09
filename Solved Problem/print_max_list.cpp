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
void print_max(node* head){
    node* tmp=head;
    int m=INT_MIN;
    while(tmp!=NULL){
        if(m<tmp->val){
            m=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<m;
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
    print_max(head);
    return 0;
}