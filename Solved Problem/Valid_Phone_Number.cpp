#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()!=14) {
            cout<<"NO"<<endl;
            break;}
        else{
            while(true){
                int i=0;
                if(s[i]=='+' && s[i+1]=='8' && s[i+2]=='8' && s[i+3]=='0' && s[i+4]=='1'){
                    if(s[i+5]!='1' || s[i+5]!='0'){
                        cout<<"YES"<<endl;
                    }
                }
                else {
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}