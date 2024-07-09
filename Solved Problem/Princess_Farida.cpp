#include<bits/stdc++.h>
using namespace std;
const int N=10001;
int dp[N];
int cost(int n, int a[]){
    if(n<=0)return 0;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=max(a[n-1]+cost(n-2,a), cost(n-1,a));
}
int main()
{
    int t;cin>>t;
    int i=1;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<i<<": "<<cost(n,a)<<endl;
        i++;
    }
    return 0;
}