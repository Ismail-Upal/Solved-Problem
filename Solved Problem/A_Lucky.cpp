#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
       
        cin>>s;
        for(int i=0;i<s.size(); i++){
        int s1=s[i]+s[i+1]+s[i+2];
        int s2=s[i+3]+s[i+4]+s[i+5];
        if(s1==s2){
            cout<<"YES"<<endl;
            break;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
        }
    }
    return 0;
}