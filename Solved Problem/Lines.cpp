#include<bits/stdc++.h>
using namespace std;
char a[41][41];
bool vis[41][41];
int n;
int si,sj,di,dj;
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i,int j){
    return i>=0&&i<n&&j>=0&&j<n;
}
pair<int,int> path[41][41];
void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    while (!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;
            if(valid(ci,cj)&&!vis[ci][cj]&&a[ci][cj]!='O'){
                
                vis[ci][cj]=true;
                path[ci][cj]={d[i].first, d[i].second};
                q.push({ci,cj});
            }
        }
    }
    
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            path[i][j]={-1,-1};
            cin>>a[i][j];
            if(a[i][j]=='@') {
                si=i;
                sj=j;
            }
            if(a[i][j]=='X'){
                di=i;
                dj=j;
            }
        }
    }
    memset(vis,false,sizeof(vis));

    bfs(si,sj);
    if(!vis[di][dj]){
        cout<<'N';
        return 0;
    }
    cout<<'Y'<<endl;
    vector<pair<int,int>>ans;
    pair<int,int>des={di,dj};
    while(des.first!=si || des.second!=sj){
        ans.push_back({path[des.first][des.second]});
        des.first-=ans.back().first;
        des.second-=ans.back().second;
    }
    reverse(ans.begin(),ans.end());
    for(auto ch: ans){
        int c1=si+ch.first;
        int c2=sj+ch.second;
        a[c1][c2]='+';
        si=c1;
        sj=c2;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}