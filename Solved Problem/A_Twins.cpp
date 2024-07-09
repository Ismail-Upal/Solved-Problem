#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    double s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    s=s/2.0;
    
    int x=0,c=0;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        x+=a[i];
        c++;
        if(x>s)break;
    }
    cout<<c;

    return 0;
}