#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll x,y,k; cin>>x>>y>>k;
        ll n=x/y;
        y=y*(n+1);
        cout<<y-x<<endl;
    }
    return 0;
}