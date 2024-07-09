#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string s; cin>>s;
        int i=0,c=0;
        while(i<n){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'&& s[i+3]=='i'&&s[i+4]=='e' ){
                c++; i=i+5;
            }
            else if((s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')||( s[i]=='p'&&s[i+1]=='i' &&s[i+2]=='e')){
                c++; i=i+3;
            }
            else i++;
        }
        cout<<c<<endl;
    }
    return 0;
}