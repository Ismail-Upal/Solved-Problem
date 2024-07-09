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
        ll n,q; cin>>n>>q;
        string s; cin>>s;
        while(q--){
            ll a,b; cin>>a>>b;
            a--,b--;
            int mp[n];
            memset(mp,0,sizeof(mp));
            for(int i=a;i<=b;i++){
                mp[s[i]-'a']++;
            }
            ll cnt=0;
            for(int i=a; i<=b;i++){
                int x=mp[s[i]-'a'];
                mp[s[i]-'a']=2;
                if(x%2!=0){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}