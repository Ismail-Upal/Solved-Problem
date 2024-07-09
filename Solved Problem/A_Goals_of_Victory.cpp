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
        vector<int>v(n);
        ll sum=0;
        for(int i=0;i<n-1;i++){
            cin>>v[i];
            sum+=v[i];
        }
        cout<<-sum<<endl;
    }
    return 0;
}