#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;cin>>k;
    int lsum=0,rsum=0,mxsum=0;
    for(int i=0;i<k;i++){
        lsum+=v[i];
    }
    mxsum=lsum;
    for(int i=k-1,j=n-1; i>=0;i--){
        lsum=lsum-v[i];
        rsum=rsum+v[j];
        j--;
        mxsum=max(mxsum,lsum+rsum);
    }
    cout<<mxsum;
    return 0;
}