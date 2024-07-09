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
    int sz=s.size();
    for(int i=0;i<sz;){
        if(s[i]=='.'){
            cout<<0;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i+=2;
        }
    }
    return 0;
}