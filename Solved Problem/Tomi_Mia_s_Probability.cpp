#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        int w=0;
        for(char c:s){
            
            w++;
        }
        cout<<w<<endl;
    }
    return 0;
}