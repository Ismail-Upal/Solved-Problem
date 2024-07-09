#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int parent[N];
int grp_size[N];
void make(int n){
    for(int i=1; i<=n; i++){
        parent[i]=-1;
        grp_size[i]=1;
    }
}
int find(int node){
    if(parent[node]==-1)return node;
    int leader=find(parent[node]);
    parent[node]=leader;
    return leader;
}
void Union_size(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);
    if(grp_size[leaderA]>grp_size[leaderB]){
        parent[leaderB]=leaderA;
        grp_size[leaderA]+=grp_size[leaderB];
    }
    else{
        parent[leaderA]=leaderB;
        grp_size[leaderB]+=grp_size[leaderA];
    }
}
int main()
{
    int n; cin>>n;
    make(n);
    vector<pair<int,int>>bad;
    for(int i=1; i<=n-1; i++){
        int a,b; cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB){
            bad.push_back({a,b});
        }
        else{
            Union_size(a,b);
        }
    } 
    vector<pair<int,int>>create;
    cout<<bad.size()<<endl;
    for(int i=2; i<=n; i++){
        int leaderA=find(1);
        int leaderB=find(i);
        if(leaderA!=leaderB){
            create.push_back({1,i});
            Union_size(1,i);
      }
    }   
    for(int i=0; i<bad.size(); i++){
        cout<<bad[i].first<<" "<<bad[i].second<<" "<<create[i].first<<" "<<create[i].second<<endl;
    }
    return 0;
}