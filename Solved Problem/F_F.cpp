#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    dl r; cin>>r;
    cout<<fixed<<setprecision(6)<<(dl)M_PI*r*r<<" "<<(dl)2*M_PI*r;
    return 0;
}