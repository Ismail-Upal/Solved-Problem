#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;cin>>n;
    vector<ll>v(0);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
    }
    vector<ll>a(0);
    for(ll i=0;i<n-1;i++){
        
            //cout<<v[i]<<v[j]<<endl;
            ll y=(v[i]+v[j])%100000000;
            a.push_back(y);
        
    }
    ll s=0;
    for(auto i: a){
        s+=i;
        //cout<<i<<endl;
    }
    cout<<s;
    return 0;
}