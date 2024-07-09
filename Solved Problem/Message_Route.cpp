#include<bits/stdc++.h>
using namespace std;
const int N=200000;
vector<int>v[N];
int vis[N];
int parn[100];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child: v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                parn[child]=par;
            }
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
    memset(vis,0,sizeof(vis));
    memset(parn,-1,sizeof(parn));
    bfs(1);
    int des=n;
    vector<int>path;
    while(des!=-1){
        path.push_back(des);
        des=parn[des];
    }
    reverse(path.begin(),path.end());
    if(path.front()!=1 || (path.back()!=n)){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    
    cout<<path.size()<<endl;
    for(int v:path){
        cout<<v<<" ";
    }
    return 0;
}