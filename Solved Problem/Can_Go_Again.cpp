#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    long long int u,v,c;
    edge(long long int u,long long int v,long long int c){
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
const long long int N=10006;
long long int dis[N];
int main()
{
    long long int n,e;
    cin>>n>>e;
    vector<edge> edgelist;
   
    while(e--){
        long long int a,b,c; cin>>a>>b>>c;
        edgelist.push_back(edge(a,b,c));
    }
    long long int s; cin>>s;
    for(int i=1; i<=n; i++){
        dis[i]=1e18;
    }
    dis[s]=0;
    for(int i=1; i<=n-1; i++){
        for(edge ed: edgelist){
            long long int u,v,c;
            u=ed.u; v=ed.v; c=ed.c;
            if(dis[u]<1e18 && dis[u]+c< dis[v]){
                dis[v]=dis[u]+c;
            }
        }
    }
    bool cycle=false;
    for(int i=1; i<=n-1; i++){
        for(edge ed: edgelist){
            long long int u,v,c;
            u=ed.u; v=ed.v; c=ed.c;
            if(dis[u]<1e18 && dis[u]+c< dis[v]){
                cycle=true;
                break;
                dis[v]=dis[u]+c;
            }
        }
    }
    long long int t; cin>>t;
    if(cycle){cout<<"Negative Cycle Detected"<<endl;
            long long int d; cin>>d;
        }
    else{while(t--){
        long long int d; cin>>d;
        if(dis[d]<1e18)cout<<dis[d]<<endl;
        else cout<<"Not Possible"<<endl;
    }
    }
    return 0;
}