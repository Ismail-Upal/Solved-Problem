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
        ll n, x,y,tkx=0,tky=0;
        cin>>n>>x>>y;

        if(n%2==0 ){
            tky=y*(n/2);
            tkx=x*n;
        }
        else{
            tky=y*((n-1)/2);
            tky=tky+x;
            tkx=n*x;
        }
        if(tkx>tky)cout<<tkx<<endl;
        else cout<<tky<<endl;
    }
    return 0;
}