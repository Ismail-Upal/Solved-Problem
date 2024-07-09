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
        ll a,b;cin>>a>>b;
        if(a<b)cout<<"No"<<endl;
        else if((a+b)%2!=0)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}