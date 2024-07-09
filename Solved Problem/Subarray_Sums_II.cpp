#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll mx=2e7+12;
ll a[mx];
ll sum[mx];
int main()
{
    optimize();
    ll n, x; cin>>n>>x;
    map<ll,ll>mp;
    mp[0]=1;
    for(ll i=1; i<=n; i++) cin>>a[i];
    for(ll i=1;i<=n; i++) {
        sum[i]=sum[i-1]+a[i];
        
    }
    
    ll ans=0;
    
    for(ll i=1; i<=n; i++){
        ll sumleft=sum[i]-x;
        ans+=mp[sumleft];
        mp[sum[i]]++;    
    }
    cout<<ans;
    return 0;
}