#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mx=max(a,b);
        int mn=min(a,b);
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
    
}