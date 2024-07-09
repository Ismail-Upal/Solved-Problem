#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    double f=floor((double)a/b);
    double c=ceil((double)a/b);
    double r=round((double)a/b);
    cout<<"floor"<<" "<<a<<" "<<'/'<<" "<<b<<" "<<'='<<" "<<f<<endl;
    cout<<"ceil"<<" "<<a<<" "<<'/'<<" "<<b<<" "<<'='<<" "<<c<<endl;
    cout<<"round"<<" "<<a<<" "<<'/'<<" "<<b<<" "<<'='<<" "<<r<<endl;
    return 0;
}