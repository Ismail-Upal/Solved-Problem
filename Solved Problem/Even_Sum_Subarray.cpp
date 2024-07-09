#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        ll s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%2==0){
            cout<<n<<endl;continue;
        }
        int i=0,j=n-1;
        ll leftsum=s, rightsum=s;
        while(leftsum%2!=0){
            leftsum-=a[i];
            i++;
        }
        while(rightsum%2!=0){
            rightsum-=a[j];
            j--;
        }
        cout<<max(n-i, j+1)<<endl;
    }
    return 0;
}