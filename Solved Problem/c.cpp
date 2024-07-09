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
        ll cnt=0,n,x; cin>>n>>x;
        vector<ll>a(n+1);
        for(int i=1; i<=n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<ll>sum(n+1);
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+a[i];
           // cout<<sum[i];
            if(sum[i]>x)break;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}