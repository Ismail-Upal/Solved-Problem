#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t ; cin>>t;
    while(t--){

        string s;cin>>s;
        vector<int>b(0),B(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='b' && b.size()!=0){
                b.pop_back();
            }
            else if(s[i]=='B' && B.size()!=0){
                B.pop_back();
            }
            else if(s[i]>=65 && s[i]<=90 && s[i]!='B'){
                B.push_back(i);
            }
            else if(s[i]>=97 && s[i]<=122 && s[i]!='b'){
                b.push_back(i);
            }
        }
        vector<int>result(0);
        for(int i: b)result.push_back(i);
        for(int i:B)result.push_back(i);
        sort(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            cout<<s[result[i]];
        }
        cout<<endl;
    }
    return 0;
}