#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,k; cin>>n>>k;
    ll mx_or=0,mx_and=0,mx_xor=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            ll r=i|j, n=i&j, x=i^j;
           // cout<<n;
            if(r<k)mx_or=max(r,mx_or);
            if(n<k)mx_and=max(n,mx_and);
            if(x<k)mx_xor=max(x,mx_xor);

        }
    }
    cout<<mx_and<<endl<<mx_or<<endl<<mx_xor;
    return 0;
}