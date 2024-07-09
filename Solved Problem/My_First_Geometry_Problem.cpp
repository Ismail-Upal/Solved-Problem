#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        string s ;cin>>s;
        int cnt=0;
        for(int i=0;i<4; i++){
   
            if(s[i]=='1'){cnt++;}
        }
     
        if(cnt==1)cout<<11<<endl;
        else if(cnt==2){
            if((s[0]=='1' && s[1]=='1') ||(s[2]=='1' && s[3]=='1'))cout<<21<<endl;
            else cout<<121<<endl;
        }
        else if(cnt==3){
            cout<<231<<endl;
        }
        else cout<<441<<endl;
    }
    return 0;
}