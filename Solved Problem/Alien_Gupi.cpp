#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        double n; cin>>n;
        int d=0;
        while(n>1){
            n=n/2.0;
            d++;
        }
        cout<<d<<" days"<<endl;
    }
    return 0;
}