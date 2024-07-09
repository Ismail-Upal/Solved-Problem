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
    ll c=0;
    ll f;
    while(n!=0){
        ll b=n%2;
        n=n/2;
        
        if(b==0)f=0;
        else {f=1;break;}
        if(f==0)c++;
    }
    cout<<c;
    return 0;
}