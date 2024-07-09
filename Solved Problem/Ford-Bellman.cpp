#include<bits/stdc++.h>
using namespace std;
class edge
{
    public:
    int u,v,c;
    edge(int u,int v,int c){
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
int dis[104];
int main()
{
    int n,e; cin>>n>>e;
    
    vector<edge>edgelist;
    while(e--){
        int u,v,c; cin>>u>>v>>c;
        edgelist.push_back(edge(u,v,c));
    }
    
    for(int i=1; i<=n; i++){
        dis[i]=INT_MAX;
    }
    dis[1]=0;
    for(int i=1; i<=n; i++){
        for(edge ed: edgelist){
            int u,v,c;
            u=ed.u; v=ed.v; c=ed.c;
            if(dis[u]<INT_MAX && dis[u]+c<dis[v]){
                dis[v]=dis[u]+c;
            }
            
        }
    }
    for(int i=1; i<=n; i++){
        if(dis[i]<INT_MAX) cout<<dis[i]<<" ";
        else cout<<"30000"<<" ";
    }
    return 0;
}