#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int> adj[N];
void bfs(int src){
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a, b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    return 0;
}