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
        ll n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            mp[x]++;
        }
        if(mp.size()>2)cout<<"No"<<endl;
        else{
            if(abs(mp.begin()->second-mp.rbegin()->second)<=1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}