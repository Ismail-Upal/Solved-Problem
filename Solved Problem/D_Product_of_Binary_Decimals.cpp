#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string n;cin>>n;
        int f=1;
        for(int i:n){
            i=i-'0';
            if(i!=0 and i!=1)f=0;
        }
        if(f){cout<<"YES"<<endl;continue;}
        
        int m=stoi(n);
        if(m%10==0 || m%11==0){
            if((m/10)%10)
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}