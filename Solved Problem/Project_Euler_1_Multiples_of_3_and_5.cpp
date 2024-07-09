#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=1;i<n;i++){
            if(i%3==0 || i%5==0){
                v.push_back(i);
            }
        }
        int s=0;
        for(int i: v){
            
            s+=i;
        }
        cout<<s<<endl;

    }
    return 0;
}