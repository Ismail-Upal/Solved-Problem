#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,c; cin>>a>>b>>c;
    for(int i=1; i<=1000;i++){
        int m=c*i;
        if(m>=a && m<=b) {
            cout<<m;
            return 0;
        }

    }
    cout<<-1;
    return 0;
}