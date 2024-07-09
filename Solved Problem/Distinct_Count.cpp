#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int sz=unique(v.begin(),v.end())-v.begin();
        if(sz==x)cout<<"Good"<<endl;
        else if(sz>x)cout<<"Average"<<endl;
        else cout<<"Bad"<<endl;
    }
    return 0;
}