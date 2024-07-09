#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long long int s=0;
    for(int i=2; i<=n; i+=2){
        s=s+pow(x,i);
    }
    cout<<s;
    return 0;
}