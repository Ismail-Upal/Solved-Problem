#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,s; cin>>n>>s;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll l=0,r=0,res=0,x=0;
    for(r=0; r<n; r++){
        x+=a[r];
        while(x>s){
            x-=a[l];
            l++;
        }
        res+=(r-l+1);
    }
    cout<<res;
    return 0;
}