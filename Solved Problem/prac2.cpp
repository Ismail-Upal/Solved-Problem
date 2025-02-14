#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
int level[1000];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child: v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
            }
        }
    }
}
int main()
{
    int n,e; cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int l; cin>>l;
    memset(vis,false,sizeof(vis));
    bfs(0);
    
    for(int i=n-1; i>=0; i--){
        if(level[i]==l)cout<<i<<" ";
    }
    return 0;
}