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
        vector<ll>v(n);
        for(ll &i:v)cin>>i;

        ll s=0, mx=0,c=0;
        for(ll i=0;i<n;i++){
            mx=max(mx,v[i]);
            s+=v[i];
            if(mx==(s-mx))c++;
        }
        cout<<c<<endl;
    }
    return 0;
}