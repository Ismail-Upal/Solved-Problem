#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        long long int s,mn=INT_MAX;
       
        for(int j=1; j<n; j++){
            for(int k=j+1; k<=n; k++){
                s=a[j-1]+a[k-1]+k-j;
                mn=min(mn,s);
                
            }
        }
        cout<<mn<<endl;
        
    }
    return 0;
    }