#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,c,d;cin>>n>>c>>d;
        int b[n*n];
        int a[n][n]={0};
        a[0][0]=INT_MAX;
        for(int i=0;i<n*n;i++){
            cin>>b[i];
            if(a[0][0]>b[i])a[0][0]=b[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j+1]=a[i][j]+d;

            }
            a[i+1][0]=a[i][0]+c;
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(a[i][j]);
                
            }
            
        }
        sort(v.begin(),v.end());
        sort(b,b+(n*n));
        int f=1;
        for(int i: v){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i: b){
            cout<<b[i]<<" ";
        }
        for(int i=0;i<n*n;i++){
            if(v[i]!=b[i]){
                
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}