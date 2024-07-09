#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a >>b;
    int s=a+b;
    long long int m=a*b;
    int st=a-b;
    cout<<a<<" + "<<b<<" = "<<s<<endl<<a<<" * "<<b<<" = "<<m<<endl<<a<<" - "<<b<<" = "<<st;
    return 0;
}