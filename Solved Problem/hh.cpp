#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n, sum=0; cin>>n;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll mn=sum/n;
    
    ll c=0;
    for(int i=1;i<=n;i++){
        if(v[i]>mn){
            while(v[i]>mn){
                ll diff=v[i]-mn;
            
            if(diff>=7){
                v[i]-=7;
            }
            else if(diff>=3){
                v[i]-=3;
            }
            else if(diff>=1){
                v[i]-=1;
            }
            if(v[i]==mn){
                c++;
                break;
            }
        }
        }
        else {
            while(v[i]<mn){
                ll diff=abs(v[i]-mn);
            
            if(diff<=7){
                v[i]+=7;
            }
            else if(diff<=3){
                v[i]+=3;
            }
            else if(diff<=1){
                v[i]+=1;
            }
            if(v[i]==mn){
                c++;
                break;
            }
        }
        }
    
        

    }
    cout<<c;
    return 0;
}

//  −7,−3,−1,+1,+3,+7}.