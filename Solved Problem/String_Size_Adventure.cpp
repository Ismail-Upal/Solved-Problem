#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int c=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            c++;
        }
        if(s[i]>='0' && s[i]<='9'){
            c=c+2;
        }
    }
    
    cout<<c;
    return 0;
}