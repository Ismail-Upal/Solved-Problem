#include<bits/stdc++.h>
using namespace std;
const int N=1001;
vector<int>v[N];
bool vis[N];
void dfs(int s){
    vis[s]=true;
    for(int child: v[s]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main()
{
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int comp=0;
    for(int i=1;i<=n; i++){
        if(!vis[i]){
            dfs(i);
            comp++;
        }
    }
    if(comp>1)cout<<"NO";
    else cout<<"YES";
    return 0;
}