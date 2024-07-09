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
        ll q; cin>>q;
        ll n=q;
        vector<pair<ll,ll>>v;
        while(q--){
            ll a,b; cin>>a>>b;
            v.push_back({a,b});
        }
        ll s=0, mx=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                s=(v[i].first*v[j].second)+(v[i].second* v[j].first);
                mx=max(mx,s);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}