#include<bits/stdc++.h>
using namespace std;
const int N=1005;
char a[N][N];
bool vis[N][N];
int cmp;
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
bool valid(int i,int j){
    return i>=0 && i<n && j>=0 && j<m;
}
void dfs(int si,int sj){
    vis[si][sj]=true;
    cmp++;
    for(int i=0; i<4; i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj]!='-'){
            
            dfs(ci,cj);
            
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
            if(a[i][j]=='-')vis[i][j]=true;
        }
    }
    
    int ans=INT_MAX;
    for(int i=0;i<n; i++){
        for(int j=0;j <m; j++){
            cmp=0;
        if(!vis[i][j]){
            
            dfs(i,j);
            ans=min(ans,cmp);
        }
    }
    }
    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    return 0;
}