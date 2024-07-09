#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int y,m,d;
    y=n/365;
    n=n-365*y;
    m=n/30;
    n=n-30*m;
    d=n;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
    return 0;
}