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
    if(n%2!=0){
        ll a=n/2 + 1;
        cout<<-a;
    }
    else cout<<n/2;
    return 0;
}