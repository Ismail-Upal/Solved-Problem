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
        ll n,k; cin>>n>>k;
        ll l=0,ans=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a; 
            ans=max(ans,a-l);
            l=a;
        }
        ans=max(ans,2*(k-l));cout<<ans<<endl;
    }
    return 0;
}