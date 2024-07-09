#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        sort(v.begin(),v.end());
        while(v.size()!=0){
            if(v.size()>0){
                int x=v.back();
                sum+=x;
                v.pop_back();
            }
            if(v.size()>0){
                int y=v.front();
                sum-=y;
                v.erase(v.begin());
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}