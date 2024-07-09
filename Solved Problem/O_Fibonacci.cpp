#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll f(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    return f(n-1)+f(n-2);
    
}
int main()
{
    optimize();
    int n;cin>>n;
    cout<<f(n);
    return 0;
}