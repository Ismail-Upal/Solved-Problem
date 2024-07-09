// #include<bits/stdc++.h>
// using namespace std;
// const int N=20;
// int n,m;
// int maze[N][N];
// int vis[N][N];
// int dx[4]={0,0,-1,1};
// int dy[4]={1,-1,0,0};
// bool valid(int x,int y){
//     return !vis[x][y] && maze[x][y]!=-1 && x>=0 && x<n && y>=0 && y<m;
// }
// void bfs(pair<int,int>src){
//     queue<pair<int,int>>q;
//     q.push(src);
//     vis[src.first][src.second]=true;
//     while(!q.empty()){
//         auto par=q.front();
//         q.pop();
//         int x=par.first;
//         int y=par.second;
//         for(int i=0; i<4; i++){
//             int newx=x+dx[i];
//             int newy=y+dy[i];
//             if(valid(newx,newy)){
//                 q.push({newx,newy});
//                 vis[newx][newy]=true;
//             }
//         }
//     }
// }
// int main()
// {
//     pair<int,int>src,des;
//     cin>>n>>m;
//     char s[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>s[i][j];
//             if(s[i][j]=='#')maze[i][j]=-1;
//             if(s[i][j]=='A')src={i,j};
//             if(s[i][j]=='B')des={i,j};
//         }        
//     }
//     bfs(src);
//     if(vis[des.first][des.second]==true) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[100][100];
bool vis[100][100];
bool valid(int i,int j){
    return !vis[i][j] && a[i][j]!=-1 && i>=0 && i<n && j>=0 && j<m;
}
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
void bfs(pair<int,int>src){
    queue<pair<int,int>>q;
    q.push(src);
    vis[src.first][src.second]=true;
    while(!q.empty()){
        auto par=q.front();
        q.pop();
        int x=par.first;
        int y=par.second;
        for(int i=0; i<4; i++){
            int newx=x+dx[i];
            int newy=y+dy[i];
            if(valid(newx,newy)){
                q.push({newx,newy});
                vis[newx][newy]=true;
            }
        }
    }
}
int main()
{
    cin>>n>>m;   
    pair<int,int>src,des;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
            if(a[i][j]=='#') a[i][j]==-1;
            if(a[i][j]=='A') src={i,j};
            if(a[i][j]=='B') des={i,j}; 
        }
    }
    bfs(src);
    if(vis[des.first][des.second])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}