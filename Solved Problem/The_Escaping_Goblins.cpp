#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b; cin>>a>>b;
    ll k; cin>>k;
    ll s=abs(a-b);
    if(s>k)cout<<"YES";
    else cout<<"NO";
    return 0;
}