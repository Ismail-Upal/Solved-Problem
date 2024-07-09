#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void input(node* &head, int v){
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
void duplicate(node* head)
{
    node* tmp=head;
    node* tmp1;
    int flag=0;
    while(tmp!=NULL){
        tmp1=tmp->next;
        while(tmp1!=NULL){
            if(tmp->val==tmp1->val){ flag=1;
            break;
            }
            tmp1=tmp1->next;
        }
        tmp=tmp->next;
    }
    if(flag==1) {
        cout<<"YES";
        return;
    }
    else {
        cout<<"NO";
        return;
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
        input(head,v);
    }
    duplicate(head);
    return 0;
}