#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    vector<ll>pre(n);
    pre[0]=v[0];
    ll mx=0;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1])pre[i]=v[i]-v[i-1];
        else pre[i]=v[i];
        mx=max(mx,pre[i]);
    }
    cout<<mx-k;
    return 0;
}