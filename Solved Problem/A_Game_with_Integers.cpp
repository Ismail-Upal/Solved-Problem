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
        if((n+1)%3==0||(n-1)%3==0)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}