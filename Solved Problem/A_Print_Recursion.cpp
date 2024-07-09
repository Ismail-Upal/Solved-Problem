#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void f(int n){
    if(n==0)return;
    cout<<"I love Recursion"<<endl;
    f(n-1);
}
int main()
{
    optimize();
    int n; cin>>n;
    f(n);
    return 0;
}