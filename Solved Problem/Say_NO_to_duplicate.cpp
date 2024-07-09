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
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(), v.end());
        ll x=unique(v.begin(), v.end())-v.begin();

        for(int i=0;i<x;i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}