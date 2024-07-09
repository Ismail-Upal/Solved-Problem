#include<bits/stdc++.h>
using namespace std;
const int N=100;
long long a[N][N];
int n,m;
long long ans(int u,int v){
    if(u>=n || v>=m) return INT_MIN;
    if(u==n-1 && v==m-1 )return a[u][v];
    long long right=ans(u,v+1)+a[u][v];
    long long left=ans(u+1,v)+a[u][v];
    return max(right,left);
}
int main()
{
    cin>>n>>m;
    
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<ans(0,0);
    return 0;
}