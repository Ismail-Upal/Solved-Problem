#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n;cin>>n;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int i,j,k,c=0;
    for(i=1;i<=n-2; ++i){
        for(j=i+1; j<=n-1; ++j){
            for(k=j+1 ; k<=n; ++k){
                if(v[j]%v[i]==0 && v[k]%v[i]==0 && v[k]%v[j]!=0){
                    ++c;
                }
            }
        }
    }
    cout<<c;
    return 0;
}