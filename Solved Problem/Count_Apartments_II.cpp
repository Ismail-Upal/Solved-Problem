#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[1001][1001];
bool vis[1001][1001];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
bool valid(int i,int j){
    return !vis[i][j] && a[i][j]!=-1 && i>=0 && i<n && j>=0 && j<m;
}
int cnt =1;
vector<int>v;

void dfs(pair<int,int>src) {
    vis[src.first][src.second]=true;
    for(int i=0; i<4; i++){
        int x=src.first+dx[i];
        int y=src.second+dy[i];
        if(valid(x,y)){
            cnt++;
            dfs({x,y});
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='#')a[i][j]=-1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(valid(i,j)){
            dfs({i,j});
            v.push_back(cnt);
            cnt=1;
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)cout<<0;
    else{
    for(int c: v){
        cout<<c<<" ";
    }
    }
    cout<<endl;
    return 0;
}