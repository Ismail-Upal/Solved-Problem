#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        n=100-n;
        if(n==0)cout<<0<<endl;
        else{
            n=n/10;
            cout<<n*10<<endl;
        }
            
    }
    return 0;
}