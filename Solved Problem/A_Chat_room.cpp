#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s; cin>>s;
    string a="hello";
    int i=0,r=0;
    for(i=0; i<s.size();i++){
        if(s[i]==a[r]){
            r++;
            if(r==5)break;
        }

    }
    if(r==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}