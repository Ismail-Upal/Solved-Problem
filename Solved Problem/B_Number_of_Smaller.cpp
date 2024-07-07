#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,m; cin>>n>>m;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    vector<int>b(m);
    for(int &i:b)cin>>i;
    int i=0,j=0;
    int ans=0;
    while(j<m){
        while(v[i]<b[j] && i<n){
            i++; ans++;
        }
        cout<<ans<<" ";
        j++;
    }
    return 0;
}