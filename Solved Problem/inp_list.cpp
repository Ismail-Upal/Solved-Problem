#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node(int val){
        this->next=NULL;
        this->val=val;
    }
};
void insert_at_tail(node* &head, int v)
{
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
void print(node* head)
{
    node* tmp=head;
    cout<<"yout linked list is: ";
    while(tmp->next!=NULL){
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
        insert_at_tail(head, v);
        
    }
    print(head);
    return 0;
}