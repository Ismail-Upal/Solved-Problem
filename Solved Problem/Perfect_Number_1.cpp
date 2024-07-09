#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long  t;cin>>t;
    while(t--){
        long long  n; cin>>n;
        vector<long long >v;
        for(long long  i=1;i<=sqrt(n);i++){
            if(n%i==0){
                v.push_back(i);
                cout<<i<<" ";
            }
        }
        
        long long  s=0;
        for(long long  i: v){
            s+=i;
        }
        cout<<s<<endl;
        // if(s==n){
        //     cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        // }
        // else cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
    }
    return 0;
}