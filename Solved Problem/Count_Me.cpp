#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    getchar();
    while(t--){
        string s;
    
        getline(cin, s);
        string w;
        stringstream ss(s);
        string a;
        int mx=INT_MIN;
        map<string,int>mp;
        while(ss>>w){
            mp[w]++;
            if(mp[w]>mx){
                mx=mp[w];
                a=w;
            }
        }
        cout<<a<<" "<<mx<<endl;
    }
    return 0;
}