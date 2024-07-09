#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n,a,b; cin>>n>>a>>b;
        if(a>=b){
            cout<<n*a<<endl;
            continue;
        }
        ll k=b-a;
        ll z=n-k;
        if(k>=n){k=n; z=0;}
        ll sum=0;
        
        sum+=(k/2.0)*(2*b+((k-1)*-1));
        sum+=(z*a);
        
        cout<<sum<<endl;

    }
    return 0;
}