#include<bits/stdc++.h>
using namespace std;
vector<int>v[55];
bool vis[55];
bool pathvisit[55];
bool ans=false;
void dfs(int s){
    vis[s]=true;
    pathvisit[s]=true;
    for(int child: v[s]){
        if(pathvisit[child]){
            ans=true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
    pathvisit[s]=false;
}
int main()
{
    int n; cin>>n;
    if(n<=2){
        cout<<0;
        return 0;
    }
    int a[n][n];
    for(int i=1;i<=n; i++){
        for(int j=1;j<=n; j++){
            cin>>a[i][j];
            if(i==j){a[i][j]=0;}
            if(a[i][j]==1){
                v[i].push_back(j);
            }
        }
    }
    memset(vis,false,sizeof(vis));
    memset(pathvisit,false,sizeof(pathvisit));
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(ans)cout<<1;
    else cout<<0;
    return 0;
}