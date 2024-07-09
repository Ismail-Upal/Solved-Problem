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
        ll n; cin>>n;
        string s; cin>>s;
        ll f=0,a=0,sm=0;
        vector<ll>v;
        
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                a++;
                sm++;
                if(a==3)f=1;
                if(i==n-1 && a>0)v.push_back(a);
            }
            else {
                v.push_back(a);
                a=0;
            }
        }
        if(f)cout<<2<<endl;
        else{
            cout<<sm<<endl;
        }
    }
    return 0;
}