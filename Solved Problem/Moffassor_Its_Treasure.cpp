#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    int ind;
    for(int i=1; i<=n; i++){
        if(a[i]<min){
            min=a[i];
            ind=i;
        }
    }
    cout<<min<<" "<<ind<<endl;
    return 0;
}