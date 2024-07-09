#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m; cin>>n;
    m=n-int (n);
    if(m==0)cout<<"int "<<n;
    else cout<<fixed<<setprecision(3)<<"float "<<int(n)<<" "<<m;
    return 0;
}