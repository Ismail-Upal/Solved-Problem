#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll x,y; cin>>x>>y;
        if(x>=3 && y>=3){
            x=x%3;
            y=y%3;
            cout<<min(x,y)<<endl;
        }
        else {
            cout<<min(x,y)<<endl;
        }
    }
    return 0;
}