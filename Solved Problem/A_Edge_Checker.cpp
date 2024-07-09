#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a,b;cin>>a>>b;
    if(a==(b-1) || a==(b+1) || (a==1 && b==10) || (a==10 && b==1))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}