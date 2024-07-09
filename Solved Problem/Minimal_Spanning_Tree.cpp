#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int u,v,c;
    edge(int u,int v,int c){
        this->c=c;
        this->u=u;
        this->v=v;
    }
};
const int N=2e5+10;
int par[N];
int Size[N];
bool cmp(edge a, edge b){
    return a.c<b.c;
}
void make(int n){
    for(int i=1; i<=n; i++){
        par[i]=-1;
        Size[i]=1;
    }
}
int find(int node){
    if(par[node]==-1) return node;
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void Union(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);
    if(Size[leaderA]>Size[leaderB]){
        par[leaderB]=leaderA;
        Size[leaderA]+=Size[leaderB];
    }
    else{
        par[leaderA]=leaderB;
        Size[leaderB]+=Size[leaderA];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    make(n);
    vector<edge>edgelist;
    while(m--){
        int u,v,c; cin>>u>>v>>c;
        edgelist.push_back(edge(u,v,c));
    }
    int e=0;
    sort(edgelist.begin(), edgelist.end(), cmp);
    long long int cost=0;
    for(edge ed: edgelist){
        int leaderU=find(ed.u);
        int leaderV=find(ed.v);
        if(leaderU==leaderV){
            continue;
        }
        else{
            Union(ed.u, ed.v);
            cost+=ed.c;
            e++;
        }
    }
    if(e==n-1){cout<<cost;}
    else {cout<<"IMPOSSIBLE";}
    return 0;
}