#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n;cin>>n;
    ll a[n];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll p[n];
  
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i];
        //cout<<p[i]<<endl;
    }
    ll q;cin>>q;
    while(q--){
        ll l,r;cin>>l>>r;
        l++,r++;
        cout<<p[r]-p[l-1]<<endl;
    }
    return 0;
}