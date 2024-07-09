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
    while (t--)
    {
        ll n,m;cin>>n>>m;
        string a,b;
        cin>>a>>b;
        ll cnt=0;
        ll i=0,j=0;
        ll sz=b.size();
        while(i<sz){
            if(b[i]==a[j]){
                cnt++;
                j++;
            }
            i++;
        }
        cout<<cnt<<endl;
        
        
    }
    
    return 0;
}