#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        
        int l1=min(a,b),r1=max(a,b);
        int l2=min(c,d),r2=max(c,d);
 
        int s=max(l1,l2);
        int e=min(r1,r2);
        if((s==l1&&e==r1)|| (s==l2 && e==r2))cout<<"NO"<<endl;
        else if(s<=e)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}