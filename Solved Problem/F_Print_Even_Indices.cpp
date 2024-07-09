#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void f(ll n,vector<int>v){
    if(n<0)return;
    if(n%2==0)cout<<v[n]<<" ";
    f(n-1,v);
}
int main()
{
    optimize();
    ll n;cin>>n;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    f(n-1,v);
    return 0;
}