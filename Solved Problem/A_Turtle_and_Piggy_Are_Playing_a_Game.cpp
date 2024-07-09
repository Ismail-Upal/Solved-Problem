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
        ll x,y,c=0; cin>>x>>y;
        while(y>1){
            y=y/2;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}