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
        ll cnt[n];
        int i=0,j=i+1;
        while(i<n){
            if(s[i]==s[j]){
                cnt[i]++;
                j++;
            }
            else{
                cnt[i]++;
                cnt[j]++;
                i=j;
                j++;
            }
        }
        for(int i: cnt){
            cout<<i;
        }
    }
    return 0;
}