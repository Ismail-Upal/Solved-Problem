#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int flag;
    for(int i=0,j=n-1; i<j; i++,j--){
        if(a[i]==a[j]){
            flag=1;
        }
        else if(a[i]!=a[j]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else if(flag==0){
        cout<<"NO";
    }
    return 0;
}