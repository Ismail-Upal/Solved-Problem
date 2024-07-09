#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    int i=1;
    while(t--){
        ll n, w; cin>>n>>w;
        ll mx=0;
        while(n--){
            ll x,y;
            cin>>x>>y;
            //cout<<y;
            mx=max(y,mx);
        }
        cout<<"Case "<<i<<": "<<mx/w<<endl;
        i++;
    }
    return 0;
}