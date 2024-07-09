#include<bits/stdc++.h>
using namespace std;
const long long int N=10005;
long long int dis[N];
vector<pair<long long int,long long int>> v[N];
void dijkstra(long long int src){
    queue<pair<long long int,int>> q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty()){
        pair<long long int,long long int> parent=q.front();
        q.pop();
        long long int node=parent.first;
        long long int cost=parent.second;
        for( pair<long long int,long long int> child: v[node]){
            long long int childNode=child.first;
            long long int childCost=child.second;
            if(cost+childCost< dis[childNode]){
                dis[childNode]=cost+childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    long long int n,e; cin>>n>>e;
    while(e--){
        long long int a,b,c; cin>>a>>b>>c;
        v[a].push_back({b,c});
        
    }
    long long int s; cin>>s;
    for(int i=1; i<=n; i++) dis[i]=INT_MAX;
    dijkstra(s);
    long long int t; cin>>t;
    while(t--){
    long long int d, dc; cin>>d>>dc;
    if(dis[d]<=dc)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}