#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    int i=0,j=1,c=0;
    while(i<n-1){
        
        if(v[i].first==v[j].second ){
            c++;
        }
        if(v[i].second==v[j].first){
            c++;
        }
        
        if(j==n-1){
            i++;
            j=i+1;
        }
        else j++;
    }
    cout<<c;
    return 0;
}