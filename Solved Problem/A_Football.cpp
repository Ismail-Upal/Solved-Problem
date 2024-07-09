#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i+1]==s[i]){
            c++;
            
            if(c==7||c==6)break;
        }
        else {c=0;}
    }
    
    if(c==6||c==7)cout<<"YES";
    else cout<<"NO";
    return 0;
}