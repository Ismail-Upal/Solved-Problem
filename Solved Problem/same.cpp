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
void insert(node* &head, node* &tail, int v){
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
int size(node* head){
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void same(node* head1, node* head2){
    node* t1=head1;
    node* t2=head2;
    int flag=1;
    while(t1!=NULL){
        if(t1->val != t2->val){
            flag=0;
            break;
        }
        t1=t1->next;
        t2=t2->next;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    node* head1=NULL;
    node* tail1=NULL;
    node* head2=NULL;
    node* tail2=NULL;
    int v;
    int c1,c2;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head1,tail1,v);
        c1=size(head1);
    }
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert(head2,tail2,v);
        c2=size(head2);
    }
    if(c1!=c2){
        cout<<"NO"<<endl;
    }
    else if(c1==c2){
        same(head1,head2);
    }
    return 0;
}