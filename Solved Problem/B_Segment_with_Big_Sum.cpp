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

    ll l=0,r=0,x=0,res=INT_MAX;
    for(r=0; r<n; r++){
        x+=a[r];
        while(x-a[l]>=s){
            x-=a[l];
            l++;
        }
        if(x>=s)res=min(res,r-l+1);
    }
    if(x<s)cout<<-1;
    else cout<<res;
    return 0;
}