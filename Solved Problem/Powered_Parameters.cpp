#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int cnt=0;
        int i=1,j=1;
        
        while(i<=n){
            if((pow(v[i],j))<=v[j]){
                cnt++;
            }
            j++;
            if(j==n+1){
                i++;
                j=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}