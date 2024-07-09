#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    
    while(1){
        t++;
        string s=to_string(t);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout<<t;
            break;
        }
        
    }
 
    return 0;
}