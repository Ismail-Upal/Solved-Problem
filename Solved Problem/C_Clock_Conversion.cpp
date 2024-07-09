#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int h=(s[0]-'0')*10 + (s[1]-'0');
        int m=(s[3]-'0')*10 + (s[4]-'0');
        int f=0;
        if(h>=12 and h<24)f=1;
        if(h>12 and h<24){
            h=h-12;
            
        }
        else if(h==0) h=h+12;
        
        (h>0 and h<10)?cout<<'0'<<h<<":":cout<<h<<":";
        (m>=0 and m<=9)?cout<<'0'<<m: cout<<m;
        (f)?cout<<" PM"<<endl:cout<<" AM"<<endl;
    }
    return 0;
}