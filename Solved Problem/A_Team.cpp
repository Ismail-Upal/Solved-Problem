#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int ans=0;
    while(n--){
        int a[3];
        int r=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1)r++;
        }
        if(r>=2)ans++;
    }
    cout<<ans;
    return 0;
}