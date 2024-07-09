#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>bat(n),bol(m);
        for(int i=0;i<n;i++){
            cin>>bat[i];
        }
        for(int i=0;i<m;i++){
            cin>>bol[i];
        }
        if(n>=4 && m>=4 && (n+m)>=11){
            sort(bat.begin(),bat.end(),greater<int>());
            sort(bol.begin(),bol.end(),greater<int>());
            ll ans=0;
            for(int i=0;i<4;i++){
                ans+=bat[i];
                ans+=bol[i];
            }
            vector<ll>tmp;
            for(int i=4;i<n;i++){
                tmp.push_back(bat[i]);
            }
            for(int i=4;i<m;i++){
                tmp.push_back(bol[i]);
            }
            sort(tmp.begin(),tmp.end(),greater<int>());
            for(int i=0;i<3;i++){
                ans+=tmp[i];
            }
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;

    }
    return 0;
}