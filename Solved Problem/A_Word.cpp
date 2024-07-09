#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')l++;
        else if(s[i]>='A' && s[i]<='Z')u++;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        
    }
    if(u>l){
        cout<<s;
    }
    else{
        for(int i=0;i<s.size();i++){
        s[i]=s[i]+32;
        
    }
    cout<<s;
    }
    return 0;
}