#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=b*log(a);
    double y=d*log(c);
    x>y ? cout<<"YES": cout<<"NO";
    return 0;
}