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
        ll n,m; cin>>n>>m;
        if(n<m && m%n==0)cout<<0<<endl;
        else if(m>n && n%m==0)cout<<0<<endl;
        else if(n==m)cout<<0<<endl;
        else if(n<m){
            ll x=m/n;
            ll y=n*x;
            ll z=n*(x+1);
            cout<<min(m-y, z-m)<<endl;
        }
        else if(n>m){
            cout<<n-m<<endl;
        }
    }
    return 0;
}