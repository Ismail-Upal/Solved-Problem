#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,q; cin>>n>>q;
    vector<char>v(n+1);
    for(int i=1;i<=n;i++){
        char ch; cin>>ch;
        v[i]=ch;
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        int c=0;
        while(l<r){
            if(v[l-1]!=v[r-1]){
                c++;
            }
            l++;r--;
        }
        if(c>k)cout<<"No"<<endl;
        else if(c%k==0 || k%c==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}