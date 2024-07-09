#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int z1=0,z2=1, sv1=n-2,sv2=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=z1; j++){
            cout<<"0";
           
        }
        for(int j=1; j<=1; j++){
            cout<<"*";
        }
        for(int j=1; j<=sv1; j++){
            if(i<=n/2) cout<<"7";
            else if(i>=n/2+1)cout<<"0";
        }
        for(int j=1; j<=1; j++){
            if(i!=n/2+1)cout<<"*";
            if(n%2==0 && i==n/2+1)cout<<"*";
        }
        for(int j=1; j<=sv2; j++){
            cout<<"7";
            
        }
        cout<<endl;
        
        if(i<n/2+1){
            z1++;
        }
        else{
            if(n%2!=0 )z1--;
        } 

        

        if(i<=n/2) sv1-=2;
        else if(i>=n/2) sv1+=2;

        if(i<(n+1)/2)sv2++;
        else {
            sv2--;
        }
    }
    return 0;
}