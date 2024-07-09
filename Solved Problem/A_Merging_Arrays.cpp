#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int c[n+m];
    int i=0,j=0,k=0;
    while(i<n || j<m){
        if(j==m || i<n && a[i]<b[j]){
            c[k]=a[i];
            i++,k++;
        }
        else{
            c[k]=b[j];
            j++; k++;
        }

    }
    for(int l=0;l<(n+m);l++){
        cout<<c[l]<<" ";
    }
    return 0;
}