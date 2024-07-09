#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e7+1;
int a[mx];
int main()
{
    optimize();
    ll t;cin>>t;
    for(int i=1;i<=1000005;i++){
        for(int j=i;j<=1000005;j+=i){
            a[j]++;
        }
    }
    while(t--){
        ll cnt=0;
        ll n;cin>>n;
        
        cout<<a[n]<<endl;
    }
    return 0;
}