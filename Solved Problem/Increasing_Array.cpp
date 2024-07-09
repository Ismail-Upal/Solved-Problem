#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
        
    }
    long long cnt=0;
    long long i=1;
    while(i<n){
        if(a[i]<a[i-1]){
            long long x=a[i-1]-a[i];
            a[i]+=x;
            cnt+=x;
        }
        i++;
    }
    cout<<cnt;
    return 0;
}