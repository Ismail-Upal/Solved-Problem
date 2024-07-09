#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=2e5+12;
int a[mx];
ll sum[mx];
int main()
{
    optimize();
    int n,x;cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1; i<=n;i++){
        sum[i]=sum[i-1]+a[i];
    }
    ll ans=0;
    map<ll,int> cnt;
    cnt[0]=1;
    for(int i=1;i<=n;i++){
        ll sumMinus=sum[i]-x;
        ans+=cnt[sumMinus];
        cnt[sum[i]]++;
    }
    cout<<ans;
    return 0;
}