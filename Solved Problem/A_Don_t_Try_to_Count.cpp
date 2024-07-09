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
        int n,m; cin>>n>>m;
        string s,r; cin>>s>>r;
        int c=0;
    
        while(c<=5){
        if(s.find(r)!=-1){
            
            break;
        }
        else{
            s=s+s;
            c++;
        }
        if(c==6){c=-1;break;}
        }
       cout<<c<<endl;
    }
    return 0;
}