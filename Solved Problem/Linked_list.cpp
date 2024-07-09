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
void insert_at_tail(node* head, int v)
{
    node* newnode=new node(v);
    if(head==NULL){
        head=newnode;
        cout<<endl<<"inserted at head"<<endl;
        return;
    }
    node* tmp=head;
    while(tmp->next==NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<endl<<"inserted at tail"<<endl;
}
void print_linked_list(node* head)
{
    cout<<endl<<"your linked list is: ";
    node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_head(node* &head, int v)
{
    node* newnode=new node(v);
    newnode->next=head;
    head=newnode;
    cout<<endl<<"inserted at head"<<endl;
}
void insert_at_position(node* head,int pos, int v)
{
    node* newnode=new node(v);
    node* tmp=head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<endl<<"invalid index"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<"inserted at position"<<pos<<endl;
}
void delete_head(node* &head)
{
    if(head==NULL){
        cout<<endl<<"head isnot available"<<endl;
        return;
    }
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<endl<<"deleted head"<<endl<<endl;
}
void delete_from_position(node* head, int pos)
{
    node* tmp=head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<"invalid index"<<endl;
            return;
        }
        if(tmp->next==NULL){
            cout<<"invalid index"<<endl;
            return;
        }
        node* deletenode= tmp->next;
        tmp->next=tmp->next->next;
        delete deletenode;
        cout<<endl<<"deleted position"<<pos<<endl<<endl;
    }
}
int main()
{
    node* head=NULL;
    while(true){
    cout<<"Option 1: Insert at tail"<<endl;
    cout<<"Option 2: Print Linked List"<<endl;
    cout<<"Option 3: Insert at any position"<<endl;
    cout<<"Option 4 insert at head"<<endl;
    cout<<"Option 5  Delete from position"<<endl;
    cout<<"Option 6: delete head"<<endl;
    cout<<"Option 7: terminate"<<endl;
    int op;cin>>op;
    if(op==1){
        int v;cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2){
        print_linked_list(head);
    }
    else if(op==3){
        int pos,v;
        cout<<"enter position: ";
        cin>>pos;
        cout<<"enter value: ";
        cin>>v;
        if(pos==0){
            insert_at_head(head,v);
        }
        else{
            insert_at_position(head,pos,v);
        }
    }
    else if(op==4){
        cout<<"enter a value: ";
        int v; cin>>v;
        insert_at_head(head,v);
    }
    else if(op==5){
        cout<<"enter position to delete: ";
        int pos; cin>>pos;
        if(pos==0){
            delete_head(head);
        }
        else{
            delete_from_position(head,pos);
        }
    }
    else if(op==6){
        delete_head(head);
    }
    else if(op==7){
        break;
    }
    }
    return 0;
}