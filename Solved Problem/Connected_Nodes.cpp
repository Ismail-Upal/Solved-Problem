#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; cin>>n>>e;
    vector<int>v[n];
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        vector<int>a;
        for(int child: v[x]){
            a.push_back(child);
        }
        sort(a.begin(),a.end(),greater<int>());
        if(a.size()>0){
            for(int child: a){
                cout<<child<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}