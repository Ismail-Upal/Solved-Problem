#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    int p=0;
    for(int i: a){
        if(i!=-1)p+=i;
        else{
            if(p==0)c++;
            else p+=i;
        }
    }
    cout<<c;
    return 0;
}