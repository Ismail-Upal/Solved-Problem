#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double q=(a*b)/c;
    long long x=(a*b)/c;
    double t=q-x;
    if(t>0)cout<<"double";
    else if(q>2147483647)cout<<"long long";
    else cout<<"int";

    return 0; 
}
