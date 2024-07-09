#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(node* &head,node* &tail, int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_mid(node* &head){
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    int mid;
    tmp=head;
    if(cnt%2!=0){
        mid=(cnt+1)/2;
        for(int i=1; i<=mid-1; i++){
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }
    else if(cnt%2==0){
        mid=cnt/2;
        for(int i=1; i<=mid-1; i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
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
        insert_tail(head,tail,v);
    }
    print_mid(head);
    return 0;
}