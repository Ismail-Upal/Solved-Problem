#include<bits/stdc++.h>
using namespace std;
class node
{public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void input(node* &head, int val){
    node* newnode=new node(val);
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
void count(node* head)
{
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    cout<<cnt;
}
int main()
{
    node* head=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        input(head,val);
    }
    count(head);
    return 0;
}