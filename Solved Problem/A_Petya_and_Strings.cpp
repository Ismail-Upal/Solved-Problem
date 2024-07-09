#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;cin>>a;
    string b;cin>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        if(b[i]>='a' && b[i]<='z'){
            b[i]=b[i]-32;
        }
        
    }
    // cout<<a<<endl<<b;
    if(a>b)cout<<1;
    else if(b>a)cout<<-1;
    else cout<<0;
    return 0;
}