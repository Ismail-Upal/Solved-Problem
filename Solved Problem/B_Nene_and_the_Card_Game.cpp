#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
       
        vector<ll>cnt(n+12);
        for(ll i=0;i<n;i++){
            ll x ; cin>>x;

            cnt[x]++;
        }
        ll c=0;
        for(ll i=1;i<=n;i++){
            if(cnt[i]==2)c++;
        }
        cout<<c<<endl;
    }
    return 0;
}