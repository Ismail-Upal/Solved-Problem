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
    vector<pair<int,char>>a;
    int n=0,m;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='('){
            a.push_back({n,'('});
            n++;
        }
        else if(s[i]==')'){
            a.push_back({n,')'});
            n--;
        }
    }
    
    sort(a.begin(), a.end());
    for(int i=0; i<s.size(); i++)cout<<a[i].second;
    return 0;
}