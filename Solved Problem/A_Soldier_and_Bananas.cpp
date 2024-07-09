#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,tk,n;cin>>p>>tk>>n;
    int d=0;
    int s=0;
    for(int i=1; i<=n; i++){
        d=p*i;
        s+=d;
    }
    if(s>tk)cout<<s-tk;
    else cout<<0;
    return 0;
}