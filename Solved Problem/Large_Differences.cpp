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
        ll n,k; cin>>n>>k;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        ll s=0,mx=0;
        for(int i=1;i<=n-1;i++){
            s+=abs(v[i]-v[i+1]);
            mx=max(s,mx);
        }
        s=0;
        for(int i=1;i<=n-1;i++){
            if(i==n-1)v[n]=1;
            else v[i]=1;

            s+=abs(v[i]-v[i+1]);
            mx=max(s,mx);
        }
        s=0;
        for(int i=1;i<=n-1;i++){
            if(i==n-1)v[n]=k;
            else v[i]=k;

            s+=abs(v[i]-v[i+1]);
            mx=max(s,mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}