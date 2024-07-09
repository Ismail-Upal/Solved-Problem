#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s;cin>>s;
    int n=s.size();
    vector<int>v;
    for(int i=0;i<n;i+=2){
        v.push_back(s[i]-'0');
    }
    sort(v.begin(),v.end());
    int m=v.size();
    for(int i=0;i<m; i++){
        cout<<v[i];
        if(i!=m-1)cout<<'+';
    }
    return 0;
}