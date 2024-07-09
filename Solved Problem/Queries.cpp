#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next=NULL;
    node(int val)
    {
        this->next=NULL;
        this->val=val;
    }
};
int size(node* head){
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_head(node* &head, int v){
    node* newnode=new node(v);
    newnode->next=head;
    head=newnode;
}
void insert_tail(node* &head,int v){
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
void delete_head(node* &head){
    if(head==NULL){
        return;
    }
    node* deletehead=head;
    head=head->next;
    delete deletehead;
}
void delete_node(node* head, int v){
    node* tmp=head;
    for(int i=1; i<=v-1; i++){
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
void prin(node* head){
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
    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x==0){
            insert_head(head,v);
        }
        else if(x==1){
            insert_tail(head,v);
        }
        else if(x==2){
            if(v==0){
                delete_head(head);
            }
            else if(v<size(head)){
                delete_node(head,v);
            }
        }
        prin(head);
    }  
    return 0;
}