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
        int x,y; cin>>x>>y;
        int s=15;
        int ans=0;
        dl n=y/2.0;
        int y1=ceil(n);
       
        ans+=y1;
        s=15*y1;
        s=s-(y*4);
        if(s<x){
            x=x-s;
            x=ceil(x/15.0);
            ans+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}