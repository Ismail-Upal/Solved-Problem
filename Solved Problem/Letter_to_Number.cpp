#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    getchar();
    int n;
    while(t--){
        string s;
        getline(cin,s);
        for(char c: s){
            n=c-'A'+1;
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}