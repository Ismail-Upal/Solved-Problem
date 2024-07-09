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
void insert_tail(node* &head, node* &tail, int v){
    node* newnode=new node(v);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int cnt(node* head){
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void same(node* t1, node* t2){
    int flag=1;
    while(t1!=NULL){
        if(t1->val==t2->val){
            t1=t1->next;
            t2=t2->next;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    node* head1=NULL;
    node* tail1=NULL;
    int v;
    int c1,c2;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_tail(head1,tail1,v);
        c1=cnt(head1);
    }
    node* head2=NULL;
    node* tail2=NULL;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_tail(head2,tail2,v);
        c2=cnt(head2);
    }
    if(c1==c2){
        same(head1,head2);
    }
    else cout<<"NO"<<endl;
    return 0;
}