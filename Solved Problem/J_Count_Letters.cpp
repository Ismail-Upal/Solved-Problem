#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>a(26);
    for(int i=0; i<s.size(); i++){
        int val=s[i]-'a';
        a[val]++;
    }
    for(int i=0; i<26; i++){
        if(a[i]>0){
            cout<<char(i+'a')<<" : "<<a[i]<<endl;
        }
    }
    return 0;
}