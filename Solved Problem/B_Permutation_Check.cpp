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
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int flag=0;
    for(int i=0;i<n;i++){
        
        if((a[i]+1)!=a[i+1]){flag=1;break;}
    }
    if(flag)cout<<"Yes";
    else cout<<"No";
    return 0;
}