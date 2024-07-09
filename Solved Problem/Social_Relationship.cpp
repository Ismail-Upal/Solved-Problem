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
    int mx=0;
    for(vector<int> a: v){
        if(a.size()>mx){
            mx=a.size();
        }
    }
    cout<<mx;
    return 0;
}