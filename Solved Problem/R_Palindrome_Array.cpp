#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool f(ll n,vector<ll>v,ll i){
    if(i==n-1)return 1;
    return v[i]==v[n-i-1]&& f(n,v,i+1);
    
}
int main()
{
    optimize();
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll &i: v)cin>>i;
    if(f(n,v,0)==true)cout<<"YES";
    else cout<<"NO";
    return 0;
}