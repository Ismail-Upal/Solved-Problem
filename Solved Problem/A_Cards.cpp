#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n; cin>>n;
    string s; cin>>s;
    ll cntz=0,cntn=0;
    for(int i=0;i<s.size(); i++){
        if(s[i]=='z')cntz++;
        if(s[i]=='n')cntn++;
    }
    while(cntn--)cout<<1<<" ";
    while(cntz--)cout<<0<<" ";
    return 0;
}