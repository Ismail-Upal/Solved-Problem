#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
    ll a=0;
    while(n){
        if(n&1)a++;
        n>>=1;
    }
    cout<<a;
    return 0;
}