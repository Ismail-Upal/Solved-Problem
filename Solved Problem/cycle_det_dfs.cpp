#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
int parent_ar[N];
bool ans;
void dfs(int parent){
    vis[parent]=true;
    for(int child: adj[parent]){
        if(vis[child] && parent_ar[parent]!=child){
            ans=true;
        }
        if(!vis[child]){
            parent_ar[child]=parent;
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b; 
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans=false;
    memset(vis,false,sizeof(vis));
    memset(parent_ar,-1,sizeof(parent_ar));
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(ans) cout<<"cycle found";
    else cout<<"not found";
    return 0;
}