#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
void bfs(int src,int des){
    queue<pair<int, int>>q;
    q.push({src,0});
    vis[src]=true;
    bool flag=false;
    while(!q.empty()){
        pair<int,int>p=q.front();
        q.pop();
        int par=p.first;
        int level=p.second;
        if(par==des){
            cout<<level<<endl;
            flag=true;
        }
        for(int child: v[par]){
            if(!vis[child]){
                q.push({child,level+1});
                vis[child]=true;
            }
        }
    }
    if(!flag) cout<<-1<<endl;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;cin>>q;
    while(q--){
        int s,d; cin>>s>>d;
        memset(vis, false,sizeof(vis));
        bfs(s,d);
    }
    return 0;
}