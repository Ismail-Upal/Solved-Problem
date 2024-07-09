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
        ll n,m,k; cin>>n>>m>>k;
        
        ll mxclr=ceil((1.0*n)/m);
        if(k>=(n-mxclr))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}