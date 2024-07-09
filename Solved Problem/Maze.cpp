#include<bits/stdc++.h>
using namespace std;
const int N=1005;
char a[N][N];
int n,m;
int si,sj,di,dj;
bool vis[N][N];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j){
    return i>=0 && i<n && j>=0 && j<m;
}
pair<int,int> parent[N][N];
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    while(!q.empty()){
        pair<int,int>par=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj]!='#'){
                q.push({ci,cj});
                vis[ci][cj]=true;
                
                parent[ci][cj]={par.first,par.second};
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
            if(a[i][j]=='R'){
                si=i;
                sj=j;
            }
            if(a[i][j]=='D'){
                di=i;
                dj=j;
            }
            
        }
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    bfs(si,sj);
    pair<int,int> x={di,dj};
    if(vis[di][dj]){
    while(x.first!=-1 || x.second!=-1){
        a[x.first][x.second]='X';   
        x={parent[x.first][x.second]};
    }
    a[si][sj]='R';
    a[di][dj]='D';
    }
    for(int i=0; i<n; i++){
        for(int j=0;j <m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}