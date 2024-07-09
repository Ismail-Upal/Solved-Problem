#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll x,y; cin>>x>>y;
    ll s=pow(x,y);
    ll p=pow(y,x);
    
    if(s<p)cout<<'<';
    else if(s>p)cout<<'>';
    else cout<<'=';
    return 0;
}