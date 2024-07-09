#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,x;
int a[N][N];
vector<int>v[N];
bool vis[N];
int dis[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    dis[s]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        
        for(int child : v[par]){
          
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                dis[child]=dis[par]+1;
            }
        }
    }
}
int main()
{
    cin>>n>>x;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
         
            if(a[i][j]==1){
                v[i].push_back(j);
                
            }
        }
    }
    
    
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(x);
   
    for(int i=1; i<=n; i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}