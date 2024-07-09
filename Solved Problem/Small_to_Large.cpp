#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int a[3];
        for(int i=0;i<3; i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            for(int j=i+1; j<3; j++){
                if(a[j]<a[i]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        cout<<"Case "<<i<<": ";
        for(int i=0;i<3;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}