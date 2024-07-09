#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=a[0];
    int in=0;
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
            in=i+1;
            break;
        }
    }
    if(m==a[0]){
        cout<<-1;
    }
    else cout<<in;
    return 0;
}