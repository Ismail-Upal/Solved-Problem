#include<bits/stdc++.h>
using namespace std;
bool vis[100][100];
int dis[100][100];
int n,m;
char a[100][100];
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m){
        return false;
    }
    return true;
}
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty()){
        pair<int,int> par=q.front();
        q.pop();
        cout<<par.first<<" "<<par.second<<endl;
        for(int i=0; i<4; i++){
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false){
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[par.first][par.second]+1;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n; i++){
        for(int j=0; j<m;j++){
            cin>>a[i][j];
        }
    }
    int si,sj; cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    cout<<dis[2][3];
    return 0;
}