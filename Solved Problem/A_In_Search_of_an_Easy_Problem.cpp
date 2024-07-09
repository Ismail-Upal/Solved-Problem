#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    int f=0;
    for(int i=0; i<n;i++){
        cin>>a[i];
        if(a[i]==1)f=1;
    }
    if(f)cout<<"HARD";
    else cout<<"EASY";
    return 0;
}