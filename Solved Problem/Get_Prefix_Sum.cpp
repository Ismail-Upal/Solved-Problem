#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<long long int>p(n);
    p[0]=a[0];
    for(int i=1; i<n; i++){
        p[i]=p[i-1]+a[i];
    }
    reverse(p.begin(),p.end());
    for(long long int i:p){
        cout<<i<<" ";
    }
    return 0;
}