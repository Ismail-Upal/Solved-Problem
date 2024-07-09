#include<bits/stdc++.h>
using namespace std;
char a[101][101];
bool vis[101][101];
vector<pair<int,int>>d={{2,-1},{2,1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
int dis[101][101];
bool valid(int i,int j,int n,int m){
    if(i<0||i>=n||j<0||j>=m){
        return false;
    }
    return true;
}
void bfs(int si,int sj, int n, int m){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty()){
        pair<int,int>par=q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;
            if(valid(ci,cj,n,m) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[par.first][par.second]+1;
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int ki,kj; cin>>ki>>kj;
        int qi,qj; cin>>qi>>qj;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vis[i][j]=false;
                dis[i][j]=-1;
            }
        }
        bfs(ki,kj,n,m);
        cout<<dis[qi][qj]<<endl;
    }
    return 0;
}