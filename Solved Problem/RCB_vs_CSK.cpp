#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll r, c;
    cin>>r>>c;
    ll sub=r-c;
    if(sub>=18)cout<<"RCB";
    else cout<<"CSK";
    return 0;
}