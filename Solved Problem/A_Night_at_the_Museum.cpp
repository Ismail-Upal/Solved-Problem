#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    char c='a';
    for(char x:s){
        int i=abs(x-c);
        // cout<<i<<" ";
        if(i>13)cnt+=26-i;
        else cnt+=i;
        c=x;
    }
    cout<<cnt;
    return 0;
}