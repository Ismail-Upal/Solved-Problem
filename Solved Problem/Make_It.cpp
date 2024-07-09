#include<bits/stdc++.h>
using namespace std;
int dp[100001];
bool ans(int i,int n){
    if(i==n)return true;
    if(i>n)return false;
    if(dp[i]!=-1)return dp[i];
    bool a1=ans(i+3,n);
    bool a2=ans(i*2,n);
    return dp[i]=a1||a2;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        memset(dp,-1,sizeof(dp));
        if(ans(1,n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}