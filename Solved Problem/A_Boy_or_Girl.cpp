#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    for(int i=0;i<100;i++){
        char c;cin>>c;
        s.insert(c);
    }
    if(s.size()%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}