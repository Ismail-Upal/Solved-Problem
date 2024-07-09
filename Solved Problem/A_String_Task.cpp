#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s;cin>>s;
    for(int i=0;i<s.size(); ){
        if(s[i]=='a'||s[i]=='A'||s[i]=='E'||s[i]=='e'||s[i]=='i'||s[i]=='I'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='y'||s[i]=='Y'){
            s.erase(s.begin()+i);
            continue;
        }
        
        if(s[i]>='A' && s[i]<='Z')s[i]=s[i]+32;
        i++;
    }
    
    for(int i=0;i<s.size();i++){
        cout<<'.'<<s[i];
    }
    return 0;
}