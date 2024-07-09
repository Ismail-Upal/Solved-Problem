#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0;
        for(char c:s ){
            if(c=='U')cnt++;
        }
        if(cnt%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}