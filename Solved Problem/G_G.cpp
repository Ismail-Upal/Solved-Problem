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
    ll a=n/100;
    ll b=(n%100)/10;
    ll c=(n%100)%10;
    cout<<((a*100)+(b*10)+c)+ ((b*100)+(c*10)+a)+ ((c*100)+(a*10)+b);
    return 0;
}