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
        ll a,b,k; cin>>a>>b>>k;
        ll div=(b-a)%k;
        if(div==0){
            cout<<(b-a)/k<<endl;
        }
        else {
            div=(b-(a+1))%k;
            if(div==0){
                cout<<(b-(a+1))/k<<endl;
            }
        }
        
    }
    return 0;
}