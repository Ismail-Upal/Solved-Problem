#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
            if(a[i]<=m && k!=0){

                k--;
                cnt++;
            }
            else if(a[i]>m && k!=0){
                while(a[i]>m){
                    
                    k--;
                    a[i]=a[i]-m;
                    
                }
            }
    }
    cout<<cnt;
    return 0;
}