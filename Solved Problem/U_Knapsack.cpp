#include<bits/stdc++.h>
using namespace std;
const int N=1000;
const int W=1000;
int dp[N][W];
int knapsack(int n,int weight[],int value[],int w){
    if(n==0 || w==0)return 0;
    if(dp[n][w]==-1)return dp[n][w];
    if(weight[n-1]<=w){
        int op1=knapsack(n-1,weight,value,w-weight[n-1])+value[n-1];
        int op2=knapsack(n-1,weight,value,w);
        return dp[n][w]=max(op1,op2);
    }
    else{
        int op2=knapsack(n-1,weight,value,w);
        return dp[n][w]=op2;
    }
}
int main()
{
    int n,w; cin>>n>>w;
    int weight[n],value[n];
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    // memset(dp,-1,sizeof(dp));
    cout<<knapsack(n,weight,value,w);
    return 0;
}