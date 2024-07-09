#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int par[N];
int grp_size[N];

void make(int n){
    for(int i=1;i<=n; i++){
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
    int n,e; cin>>n>>e;
    make(n);
    int cnt=0;
    bool cycle=false;
    while(e--){
        int a,b; cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB){cycle=true;
            cnt++;
        }
        else{Union(a,b);}
    }
 
    cout<<cnt;
    return 0;
}