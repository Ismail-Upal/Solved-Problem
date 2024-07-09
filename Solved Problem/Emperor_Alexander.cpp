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
bool cmp(edge a, edge b){
    return a.c<b.c;
}
const int N=100005;
int n,e;

int par[N];
int grp_size[N];
void make(int n){
    for(int i=1; i<=n; i++){
        par[i]=-1;
        grp_size[i]=1;
    }
}
int find(int node){
    if(par[node]==-1)return node;
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void Union(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);
    if(grp_size[leaderA]>grp_size[leaderB]){
        par[leaderB]=leaderA;
        grp_size[leaderA]+=grp_size[leaderB];
    }
    else{
        par[leaderA]=leaderB;
        grp_size[leaderB]+=grp_size[leaderA];
    }
}
int main()
{
    cin>>n>>e;
    make(n);
    int edg1=e;
    vector<edge>edgelist;
    while(e--){
        int u,v,c;
        cin>>u>>v>>c;
        edgelist.push_back(edge(u,v,c));
    }
    sort(edgelist.begin(),edgelist.end(),cmp);
    long long int totalcost=0;
    int edg2=0;
    for(edge ed: edgelist){
        int leaderU=find(ed.u);
        int leaderV=find(ed.v);
        if(leaderU==leaderV){
            continue;
        }
        else{
            Union(ed.u,ed.v);
            totalcost+=ed.c;
            edg2++;
        }
    }
    if(edg2==n-1)cout<<edg1-edg2<<" "<<totalcost;
    else cout<<"Not Possible";
    return 0;
}