#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,e; cin>>n>>e;
    ll adj[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            adj[i][j]=1e18;
            if(i==j) adj[i][j]=0;
        }
    }
    while(e--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(adj[a][b]>c) adj[a][b]=c;
    }
    for(ll k=1; k<=n; k++){
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                if(adj[i][k]+adj[k][j]< adj[i][j]){
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    ll t; cin>>t;
    while(t--){
        ll s,d; cin>>s>>d;
        if(adj[s][d]==1e18)cout<<"-1"<<endl;
        else cout<<adj[s][d]<<endl;
    }
    return 0;
}