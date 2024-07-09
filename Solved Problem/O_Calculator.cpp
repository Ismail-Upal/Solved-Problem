#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; char c;
    cin>>a>>c>>b;
    int s;
    if(c=='+')s=a+b;
    else if(c=='-')s=a-b;
    else if(c=='*')s=a*b;
    else s=a/b;

    cout<<s;
    return 0;
}