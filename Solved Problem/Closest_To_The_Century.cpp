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
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
    return 0;
}