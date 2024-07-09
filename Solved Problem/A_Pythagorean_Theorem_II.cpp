#include<bits/stdc++.h>
using namespace std;
const int mx=2e8+12;
bool ps[mx];
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        ps[i*i]=1;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int v=(i*i)+(j*j);
            if(ps[v])cnt++;
        }
    }
    cout<<cnt;
    return 0;
}