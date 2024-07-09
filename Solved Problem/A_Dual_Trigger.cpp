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
        ll n; cin>>n;
        string s; cin>>s;
        ll c=0,f=0;
        for(int i=0;i<n;i++)if(s[i]=='1'){
            c++;
            if(s[i]==s[i+1])f=1;
        }
        if(c%2!=0)cout<<"NO"<<endl;
        else if(c==2 && f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}