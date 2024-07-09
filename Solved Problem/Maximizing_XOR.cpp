#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,m,mx=0; cin>>n>>m;
    for(int i=n;i<=m; i++){
        for(int j=n;j<=m;j++){
            ll x=i^j;
            mx=max(mx,x);
        }
    }
    cout<<mx;
    return 0;
}