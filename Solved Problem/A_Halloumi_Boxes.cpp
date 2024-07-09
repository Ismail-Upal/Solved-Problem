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
        ll n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int &i:v)cin>>i;

        if(is_sorted(v.begin(),v.end()) || k>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}