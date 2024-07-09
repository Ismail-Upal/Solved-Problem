#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t ;cin>>t;
    while(t--){
        ll n,l,r; cin>>n>>l>>r;
        vector<ll>v(n);
        for(ll &i:v)cin>>i;
        ll sum=0,ans=0,j=0;
        for(ll i=0;i<n;){
            sum+=v[j];
            while(sum<l){
                j++;
                sum+=v[j];
            }
            if(sum>=l && sum<=r){
                ans++;
            }
            j++;
            i=j;
            sum=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}