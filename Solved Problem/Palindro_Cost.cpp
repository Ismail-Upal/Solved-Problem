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
        string s; cin>>s;
        ll c; cin>>c;
        ll sz=s.size();
        ll l=0, r=sz-1;
        ll cost=0;
        
        while(l<r){
            
                ll dif=abs(((s[l]-'a')+1)-((s[r]-'a')+1));
               // cout<<dif<<endl;
                cost+=dif;
                l++;r--;
            
        }
        if(cost<=c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}