#include<bits/stdc++.h>
using namespace std;
int sz=0;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_head(node*&head, node*&tail, int val){
    sz++;
    node* newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;;
    head=newnode;
}
void insert_tail(node*&head, node*&tail, int val){
    node* newnode=new node(val);
    sz++;
    if(head==NULL){
        insert_head(head,tail,val);
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
bool insert_pos(node*&head,node*&tail, int val, int pos){
    sz++;
    if(head==NULL || pos==0){
        insert_head(head,tail,val);
        return true;
    }
    node* tmp=head;
    node* newnode=new node(val);
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
        if(tmp==NULL){
            cout<<"Invalid"<<endl;
            return false;
        }
    }
    newnode->prev=tmp;
    newnode->next=tmp->next;
    tmp->next=newnode;
    if(newnode->next==NULL){
        tail=newnode;
    }
    return true;
}
bool delete_pos(node*&head, node*&tail, int pos){
    if(head==NULL){
        cout<<"Invalid"<<endl;
        return false;
    }
    sz--;
    node*tmp=head;
    if(tmp->next==NULL){
        head=head->next;
        tail=NULL;
        delete tmp;
        return true;
    }
    if(pos==0){
        head=head->next;
        head->prev=NULL;
        delete tmp;
        return true;
    }
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
        if(tmp==NULL) return false;
    }
    node* delnode=tmp->next;
    tmp->next=delnode->next;
    if(delnode->next!=NULL){
        delnode->next->prev=tmp;
    }
    else{
        tail=tmp;
    }
    return true;
}
void print_list(node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(node*head,node*tail){
    node*i=head;
    node*j=tail;
    while(i!=j && i->prev!=j){
        swap(i->val, j->val);
        i=i->next;
        j=j->prev;
    }
}
void reverse_print(node*tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    node* head=NULL;
    node* tail=NULL;
    while(q--){
        int x,v,pos;
        bool flag=true;
        cin>>x;
        if(x==0){
            cin>>v;
            insert_head(head,tail,v);
        }
        else if(x==1){
            cin>>v;
            insert_tail(head,tail,v);
        }
        else if(x==2){
            cin>>v>>pos;
            flag=insert_pos(head,tail,v,pos);
        }
        else if(x==3){
            cin>>pos;
            flag=delete_pos(head,tail,pos);
        }
        else if(x==4){
            reverse(head,tail);
        }
        if(flag){
            cout<<"forward : ";print_list(head);
            cout<<"reverse : ";reverse_print(tail);
            cout<<"size : "<<sz<<endl;
            
        }
    }
    return 0;
}