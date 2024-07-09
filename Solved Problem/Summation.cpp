#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x=n%10;
        int y=n/10000;
        cout<<"Sum = "<<x+y<<endl;
    }
    return 0;
}