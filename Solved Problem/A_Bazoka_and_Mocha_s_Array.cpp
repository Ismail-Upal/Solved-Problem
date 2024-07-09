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
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        ll pos=0;
        for(int i=1;i<n;i++){
            if(v[i]>v[i+1]){
                pos=i;
                break;
            }
        }
        if(!pos)cout<<"Yes"<<endl;
        else{
            int f=1;
            
            for(int i=pos+1; i<=n;i++){
                int j;
                if(i==n)j=1;
                else j=i+1;
                if(v[i]>v[j]){
                    f=0;
                    break;
                }
            }
            if(!f)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}