#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
        sort(a,a+n);
    while(q--){
        int l=0,r=n-1;
        
        int flag=0;
        int x;
        cin>>x;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x){
                flag=1;
                break;
            }
            if(x<a[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(flag==1) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}