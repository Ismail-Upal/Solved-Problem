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
        ll n;cin>>n;
        vector<ll>v(n+1);
        
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int ans=3;
        for(int i=1;i<=n;i++){
            if(v[v[i]]==i){ans=2;  break;}        }
        cout<<ans<<endl;
    }
    return 0;

}