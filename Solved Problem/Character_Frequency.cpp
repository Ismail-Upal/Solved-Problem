#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        getchar();
        string s;
        getline(cin,s);
        char c; cin>>c;
        int count=0;
        for(char k: s){
            if(k==c)count++;
        }
        cout<<"Occurrence of '"<<c<<"' in '"<<s<<"' = "<<count<<endl;
    }
    return 0;
}