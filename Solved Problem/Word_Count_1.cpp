#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    getchar();
    while(t--){
        string s;
        int co=0;
        getline(cin,s);
        for(char c: s){
            if(c==' '){
                co++;
            }
        }
        cout<<"Count = "<<co+1<<endl;
    }
    return 0;
}