#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string x;
        cin>>x;
        while(s.find(x)!=-1){
            s.replace(s.find(x),x.size(),"#");
        }
        cout<<s<<endl;
    }
    return 0;
}