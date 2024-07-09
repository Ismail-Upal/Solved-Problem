#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int asc=1;
        int dsc=1;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                asc=0;
                break;
            }
        }
        for(int i=1; i<n;i++){
            if(a[i-1]<a[i]){
                dsc=0;
                break;
            }
        }

        if(asc==1 || dsc==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}