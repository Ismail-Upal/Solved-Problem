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
        ll n,k; cin>>n>>k;
        vector<ll>v(n);
        for(ll & i:v)cin>>i;

        sort(v.begin(),v.end());
        ll c=1;
        for(ll i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                c++;
                if(c==k)break;
            }
            else{
                c=1;
            }

        }
        if(c==k)cout<<k-1<<endl;
        else cout<<n<<endl;
    }
    return 0;
}