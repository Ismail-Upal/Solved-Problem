#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        int s=0;
            for(int v: mylist){
                s++;
            }
        if(x==0){
            mylist.push_front(v);
        }
        else if(x==1){
            mylist.push_back(v);
        }
        else if(x==2){
            
            if(v<s){
                mylist.erase(next(mylist.begin(),v));
            }
        }
        cout<<"L -> ";
        for(int v:mylist){
            cout<<v<<" ";
        }
        cout<<endl;
        mylist.reverse();
        cout<<"R -> ";
        for(int v:mylist){
            cout<<v<<" ";
        }
        cout<<endl;
        mylist.reverse();
    }
    return 0;
}