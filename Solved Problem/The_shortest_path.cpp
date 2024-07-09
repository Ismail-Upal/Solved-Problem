#include<bits/stdc++.h>
using namespace std;
const int N=20000;
vector<pair<int,int>>v[N];
int dis[N];
int par[N];
void dij(int src){
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src]=0;
    while (!q.empty())
    {
        pair<int,int>parent=q.front();
        q.pop();

        int node=parent.first;
        int cost=parent.second;
        
        for(pair<int,int>child: v[node]){
            int childnode=child.first;
            int childcost=child.second;
            if((cost+childcost) < dis[childnode]){

                dis[childnode]=cost+childcost;
                par[childnode]=node;
                
                q.push({childnode, dis[childnode]});
            }
        }
    }
    
}
int main()
{
    int n,e; cin>>n>>e;
    int s,d; cin>>s>>d;
    while(e--){
        int a,b,w; cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    for(int i=1;i<=n; i++){
        dis[i]=INT_MAX;
        par[i]=-1;
    }
    
    dij(s);
    int x=d;
    vector<int>path;
    if(dis[d]==INT_MAX){
        cout<<-1;
        return 0;

    }
    while(x!=-1){
        path.push_back(x);
        x=par[x];
    }
    reverse(path.begin(),path.end());
    
    cout<<dis[d]<<endl;
    for(int i: path){
        cout<<i<<" ";
    }
    return 0;
}