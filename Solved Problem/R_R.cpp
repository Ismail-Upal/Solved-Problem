#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,b; cin>>a>>b;
    ll x=pow(a,b);
    ll y=pow(b,a);
    cout<<(ll)x+y<<endl;
    return 0;
}