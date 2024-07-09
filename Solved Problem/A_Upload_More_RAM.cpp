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
        ll n,k;
        cin>>n>>k;
        ll ans=(n-1)*k;
        cout<<ans+1<<endl;

    }
    return 0;
}