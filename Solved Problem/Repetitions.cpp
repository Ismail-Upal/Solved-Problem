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
    int i=0, j=0;
    int cnt=1,mx=1;
    //sort(s.begin(),s.end());
    while(i<n-1){
        if(s[i]==s[i+1]){
            cnt++;
            
            mx=max(mx,cnt);
        }
        else cnt=1;
        i++;
    }
    cout<<mx;
    return 0;
}