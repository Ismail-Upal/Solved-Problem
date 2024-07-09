#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    while(q--){
        ll a,b;
        cin>>a>>b;
        ll sum=0;
        for(ll i=a;i<=b;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}