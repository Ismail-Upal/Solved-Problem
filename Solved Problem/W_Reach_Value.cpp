#include<bits/stdc++.h>
using namespace std;
long long ans(long long i,long long n){
    if(i>=n)return i;
    long long a=ans(i*10, n);
    long long b=ans(i*20,n);
    return min(a,b);
}
int main()
{
    long long t; cin>>t;
    while (t--)
    {
        long long i=1;
        long long n; cin>>n;
        long long a=ans(i,n);
       
        if(a==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}