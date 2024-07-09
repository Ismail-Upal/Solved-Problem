#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;cin>>t;
    while(t--){
        long long  n; cin>>n;
        long long  m=1;
        for(long long  i=n; i>0;i--){
            m=m*i;
        }
        cout<<m<<endl;
    }
    return 0;
}