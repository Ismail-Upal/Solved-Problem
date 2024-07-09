#include<bits/stdc++.h>
using namespace std;
int dp[10001][10001];
int knapsack(int n,int weight[],int v[],int W){
    if(n==0||W==0)return 0;
    if(dp[n][W]!=-1)return dp[n][W];
    if(weight[n-1]<=W){
        int op1=knapsack(n-1,weight,v,W-weight[n-1])+v[n-1];
        int op2=knapsack(n-1,weight,v,W);
        return dp[n][W]=max(op1,op2);
    }
    else{
        int op2=knapsack(n-1,weight,v,W);
        return dp[n][W]=op2;
    }
}
int main()
{
    int t; cin>>t;
    while(t--){
       int n; cin>>n;
       int W; cin>>W;
       int weight[n];
       int v[n];
       for(int i=0;i<n;i++){
            cin>>weight[i];
       } 
       for(int i=0; i<n;i++){
            cin>>v[i];
       }
       for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            dp[i][j]=-1;
        }
       }
       cout<<knapsack(n,weight,v,W)<<endl;
    }
    return 0;
}