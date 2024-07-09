#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,a,b,s=0;cin>>n>>a>>b;
        while(n>0){
            if(b<(2*a) && n>1){
                s+=b;
                n-=2;
            }
            else{
                s+=a;
                n--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}