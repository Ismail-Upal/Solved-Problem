#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    string val;
    node* next;
    node* prev;
    node(string val){
        this->next=NULL;
        this->val=val;
        this->prev=NULL;
    }
};
void insert(node*&head, node*&tail, string v){
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
void visit(node* &cur,string c){
    while(cur!=NULL){
        if(cur->val==c){
            cout<<cur->val<<endl;
            return;
        }
        cur=cur->next;
    }
    
}
void prev(node* &cur){
    while(cur->prev!=NULL){
        cur=cur->prev;
        cout<<cur->val<<endl;
        return;
    }
    cout<<"Not Available"<<endl;
    return;
}
void next(node*&cur){
    while(cur->next!=NULL){
        cur=cur->next;
        cout<<cur->val<<endl;
        return;
    }
    cout<<"Not Available"<<endl;
    return;
}
bool find(node* head,string c){
    node* tmp=head;
    while(tmp!=NULL){
        if(tmp->val==c){
            return true;
        }
        tmp=tmp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    string v;
    while(true){
        cin>>v;
        if(v=="end") break;
        insert(head,tail,v);
    }
    node* cur=head;
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        
        if(s=="visit"){
            
            string c;
            cin>>c;
            bool t=find(head,c);
            if(t==true){
                cur=head;
                visit(cur,c);
            }
            else if(t==false) cout<<"Not Available"<<endl;
        }
        else if(s=="prev"){
            prev(cur);
        }
        else if(s=="next"){
            next(cur);
        }
    }
    return 0;
}