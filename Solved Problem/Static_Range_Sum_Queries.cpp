#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,q;
    cin>>n>>q;
    
    ll a[n];
    ll preSum[n];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    for(ll i=1;i<=n;i++){
        preSum[i]=preSum[i-1]+a[i];
    }
    while(q--){
        ll l,r;cin>>l>>r;
        cout<<preSum[r]-preSum[l-1]<<endl;
    }
    return 0;
}