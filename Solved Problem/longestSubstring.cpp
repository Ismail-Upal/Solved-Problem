#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size();
    int l=0,r=0,mxlen=0;
    int hash[256]={-1};
    while(r<n){
        if(hash[s[r]!=-1]){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }
        int len=r-l+1;
        mxlen=max(len,mxlen);
    }
    cout<<mxlen;
    return 0;
}