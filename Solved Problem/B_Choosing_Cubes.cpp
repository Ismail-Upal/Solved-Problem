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
        ll n,f,k; cin>>n>>f>>k;
        vector<ll>v(n+1);
        int cnt1[101]={0};
        for(int i=1;i<=n;i++){
            cin>>v[i];
            cnt1[v[i]]++;
        }
        int fav=v[f];
        
        sort(v.rbegin(),v.rend());
        v.erase(v.begin(),v.begin()+k);
        int cnt2[101]={0};
        for(int i=0;i<(n-k); i++){
            cnt2[v[i]]++;
        }
        if(cnt1[fav]!=cnt2[fav] && cnt2[fav]==0)cout<<"YES"<<endl;
        else if(cnt1[fav]==cnt2[fav])cout<<"NO"<<endl;
        else cout<<"MAYBE"<<endl;
    }
    return 0;
}