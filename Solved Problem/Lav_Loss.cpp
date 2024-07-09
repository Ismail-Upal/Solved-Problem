#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    dl x,y,z;
    cin>>x>>y>>z;

    dl tk=(100*x)/(100-y);

    double prof=tk*z/100;
    cout<<fixed<<setprecision(2)<<tk+prof;
    return 0;
}