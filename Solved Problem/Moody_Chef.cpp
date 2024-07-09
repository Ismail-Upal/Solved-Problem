#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long  t; cin>>t;
    while(t--){
        long long  n,l,r;
        cin>>n>>l>>r;
        long long  a[n];
        for(long long  i=0;i<n;i++){
            cin>>a[i];
        }
        long long  h=0, mx=0, mn=INT_MAX;
        for(long long  i=0; i<n;i++){
            if(a[i]>=l && a[i]<=r){
                h++;
            }
            else{
                h--;
            }
            if(h>mx)mx=h;
            else if(h<mn)mn=h;
        }
        cout<<mx<<" "<<mn<<endl;
    }
    return 0;
}