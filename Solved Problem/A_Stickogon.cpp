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
        ll n; cin>>n;
        vector<ll>v(101);
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v[x]++;
        }
        ll cnt=0;
        for(auto i: v){
            cnt+=i/3;
        }
        cout<<cnt<<endl;
    }

    return 0;
}