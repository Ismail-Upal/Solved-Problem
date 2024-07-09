#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,t; cin>>a>>b>>t;
    if(t<a && b<t){
        cout<<"NO";
        return 0;
    }
   
    for(int n=0;n<=100;n++){
        for(int m=0;m<=100; m++){
            ll ans=(a*n)+(b*m);
            if(t==ans){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}