#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        if(n==1)cout<<"YES"<<endl;
        else {
            bool flag=false;
            for(int i=0;i<n;i++){
                if(a[i]==b[i]){
                    flag=true;
                    break;
                }
            }
            if(flag)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    
    return 0;
}