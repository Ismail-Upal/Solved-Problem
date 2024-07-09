#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int cf=0,cs=0;
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='S')cs=1;
        else cf=1;
        break;
    }
    if(cs==1 && s[n-1]=='F')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}