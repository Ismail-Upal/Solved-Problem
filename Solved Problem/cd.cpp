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
        set<ll>a;
        for(int i=1;i<=m;i++){
            ll x; cin>>x;
            a.insert(x);
        }
        string c; cin>>c;
        sort(c.begin(), c.end());

        ll sz=a.size();
        for(int i=0;i<sz;i++){
            ll ind=*a.begin();
            ind--;
            s[ind]=c[i];
            a.erase(a.begin());
        }
        cout<<s<<endl;
    }
    return 0;
}