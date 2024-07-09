#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int cn=count(s.begin(),s.end(),s[0]);
        if(cn==s.size())cout<<"NO"<<endl;
        else{
            int i=0;
            while(1){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                break;
            }
            i++;
            }
            cout<<"YES"<<endl<<s<<endl;
        }
    }
    return 0;
}