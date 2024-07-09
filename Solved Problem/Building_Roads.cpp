#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int par[N];
int grp_size[N];
int level[N];
void dsu_initial(int n){
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
void dsu_union(int node1,int node2){
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
    dsu_initial(n);
    while(e--){
        int a,b; cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA!=leaderB){
            dsu_union(a,b);
        }
    }
    vector<int>leader;
    for(int i=1; i<=n; i++){
        leader.push_back(find(i));
    }
    sort(leader.begin(),leader.end());
    leader.erase(unique(leader.begin(),leader.end()),leader.end());
    cout<<leader.size()-1<<endl;
    for(int i=0; i<leader.size()-1; i++){
        cout<<leader[i]<<" "<<leader[i+1]<<endl;;
    }
    return 0;
}