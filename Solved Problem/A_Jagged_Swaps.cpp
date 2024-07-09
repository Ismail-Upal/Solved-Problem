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
        ll n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        if(v[0]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}