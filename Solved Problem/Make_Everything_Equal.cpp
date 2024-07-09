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
        ll n,k;
        cin>>n>>k;

        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll mx=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
            ll x=mp[v[i]];
            mx=max(mx,x);
        }
        if((n-mx)<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}