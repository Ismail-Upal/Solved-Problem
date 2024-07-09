#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        ll a[n+2][m+2];
        for(int i=0;i<n+2;i++){
            for(int j=0;j<m+2;j++){
                if(i==0 || j==0||i==n+1 ||j==m+1)a[i][j]=0;
                
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<=n+1;i++){
            for(int j=0;j<=m+1;j++){
                if(a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1] && a[i][j]> a[i+1][j] && a[i][j]> a[i-1][j]){
                    ll mx=max({a[i][j+1],a[i][j-1],a[i+1][j],a[i-1][j]});
                    a[i][j]=mx;
                    
                }
            }
            
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}