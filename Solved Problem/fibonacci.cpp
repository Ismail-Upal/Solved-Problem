// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int  n;cin>>n;
//     long long int a[n];
//     a[0]=0;
//     a[1]=1;
//     for(long long int i=2; i<=n; i++){
//         a[i]=a[i-1]+a[i-2];
//     }
//     cout<<a[n];
//     return 0;
// }
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+5;
ll dp[N];
ll fibo(ll n){
    if(n==0||n==1) return n;
    if(dp[n]!=-1) return dp[n];
    ll ans=fibo(n-1)+fibo(n-2);
    dp[n]=ans;
    return ans;
}
int main()
{
    ll n; cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fibo(n);
    return 0;
}