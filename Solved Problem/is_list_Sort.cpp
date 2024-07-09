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
void insert(node* &tmp, int v){
    node* newnode=new node(v);
    if(tmp==NULL){
        tmp=newnode;
        return;
    }
    
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void check(node* tmp){
    
    int flag=0;
    while(tmp->next!=NULL){
            if((tmp->val)>(tmp->next->val)){
                flag=1;
                break;;
            }
            tmp=tmp->next;
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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
        insert(head,v);
    }
    check(head);
        return 0;
}