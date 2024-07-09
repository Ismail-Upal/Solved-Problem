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
        ll a,b,c,cnt=0; cin>>a>>b>>c;
        ll cntb=b/3;
        ll rem=b%3;
        ll need=3-rem;
        if(rem!=0 && need<c)cout<<-1;
        else{
            cnt+=a;
            cnt+=cntb;
            c=c-need;
            if(need>0)cnt++;
            cnt+=c/3;
            if(c%3!=0)cnt++;
            cout<<cnt<<endl;
        }
        
    }
    return 0;
}