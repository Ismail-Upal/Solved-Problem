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
        ll n,m; cin>>n>>m;
        string s; cin>>s;
        int cnt[7];
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<n; i++){
            int j=s[i]-'A';
            cnt[j]++;
        }
        ll sm=0;
        for(int i=0;i<7;i++){
            if(cnt[i]<m){
                sm+=(m-cnt[i]);
            }
        }
        cout<<sm<<endl;
    }
    return 0;
}