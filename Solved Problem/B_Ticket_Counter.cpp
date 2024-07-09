#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,t;cin>>n>>t;
    vector<ll>v(n);
    vector<ll>p(n);
    for(int i=0;i<n;i++)cin>>v[i];

    p[0]=t+v[0];
    for(int i=1;i<n;i++){
        if(p[i-1]<v[i]){
            p[i]=v[i]+t;
        }
        else p[i]=p[i-1]+t;
    }
    for(int i:p)cout<<i<<endl;
    
    return 0;
}