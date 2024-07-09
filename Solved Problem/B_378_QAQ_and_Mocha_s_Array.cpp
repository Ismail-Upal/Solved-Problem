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
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        ll m=*min_element(v.begin(), v.end());
        vector<ll>b;
        for(int i=0;i<n;i++){
            if(v[i]%m!=0){
                b.push_back(v[i]);
            }
        }
        if(b.empty())cout<<"Yes"<<endl;
        else{
            ll sz=b.size(),f=0;
            ll mn=*min_element(b.begin(), b.end());
            for(int i=0;i<sz; i++){
                if(b[i]%mn!=0){
                    cout<<"No"<<endl;
                    f=1;
                    break;
                }
                
            }
            if(f==0)cout<<"Yes"<<endl;
        }
    }
    return 0;
}