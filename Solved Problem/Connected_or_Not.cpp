#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,e; cin>>n>>e;
    vector<int>v[n];
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
    }
    int q; cin>>q;
    while(q--){
        int a,b; cin>>a>>b;
        
        int flag=0;
        for(int child: v[a]){
            if(child==b){flag=1;
          
            break;
            }
        }
        if(flag==1)cout<<"YES"<<endl;
        else if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}