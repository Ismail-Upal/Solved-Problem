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
        ll n;cin>>n;
        string s; cin>>s;
        int i=0,j=i+1;
        int a[n];
        memset(a,0,sizeof(a));
        int cnt=0;
        while(i<n-1){
            if(s[i]=='A' && s[j]=='B' && a[i]==0){
                swap(s[i],s[j]);
                a[i]=1;
                cnt++;

            }
            i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}