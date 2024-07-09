#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,t;cin>>n>>t;
    string s; cin>>s;
    while (t--)
    {
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){swap(s[i],s[i+1]);i++;}
        }
    }
    
    cout<<s;
    return 0;
}