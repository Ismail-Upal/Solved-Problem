#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e5+123;
int a[mx];
int presum[mx];
int cnt[mx];

int main()
{
    optimize();
    int t;cin>>t;
    for(int ti=1; ti<=t;ti++){
        memset(cnt,0,sizeof(cnt));
        ll n, m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++) presum[i]=presum[i-1]+a[i];
        for(int i=1;i<=n;i++)presum[i]%=m;
        
        ll ans=0;
        cnt[0]++;
        for(int i=1;i<=n;i++){
            
            ans+=cnt[presum[i]];
            cnt[presum[i]]++;
            
        }
        cout<<"Case "<<ti<<": "<<ans<<endl;
    }
    return 0;
}