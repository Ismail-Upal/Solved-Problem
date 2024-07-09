#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
int parent_ar[N];
bool ans;
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        for(int child: adj[parent]){
            if(vis[child] && parent_ar[parent]!=child){
                ans=true;
            }
            if(!vis[child]){
                q.push(child);
                parent_ar[child]=parent;
                vis[child]=true;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
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
            bfs(i);
        }
    }
    if(ans) cout<<"cycle found"<<endl;
    else cout<<"not found";
    return 0;
}