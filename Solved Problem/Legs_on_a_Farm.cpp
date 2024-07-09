#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int cnt=0;
        int cow,chi;
        if(n>=4){
            cow=n/4;
            cnt+=cow;
            n=n%4;
        }
        if(n>=2){
            chi=n/2;
            cnt+=chi;
            
        }
        cout<<cnt<<endl;;
    }
    return 0;
}