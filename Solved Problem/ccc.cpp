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
    int i=1;
    while(t--){
        double x,y; cin>>x>>y;
        double sx=0,sy=0;
        
        if(x<y){
            
            cout<<"Case #"<<i<<": "<<1<<endl;
            i++;
            continue;
        }
        if(x==y){
            
            cout<<"Case #"<<i<<": "<<2<<endl;
            i++;
            continue;
        }
        ll ans=0;
        while(1){
            sx+=x;
            x=x/2.0;
            sy+=y;
            ans++;
            if(sy>sx)break;
        }
        
        cout<<"Case #"<<i<<": "<<ans<<endl;
        i++;
    }
    return 0;
}