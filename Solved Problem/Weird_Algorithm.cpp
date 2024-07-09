#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void f(ll n){
    if(n==1){
        cout<<1;
        return;
    }
    if(n%2==0){
        cout<<n<<" ";
        f(n/2);
    }

    else{
        cout<<n<<" ";
        f((n*3)+1);
    }
}
int main()
{
    optimize();
    ll n;cin>>n;
    f(n);
    return 0;
}