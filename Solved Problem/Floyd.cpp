#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll n,e; cin>>n;
    ll adj[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int c; cin>>c;
            if(c<0) adj[i][j]=INT_MAX;
            else adj[i][j]=c;
        }
    }
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(adj[i][k]+adj[k][j]< adj[i][j]){
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(adj[i][j]>mx)mx=adj[i][j];
        }
    }
    cout<<mx;
    return 0;
}