#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        cin.ignore();
        string s;getline(cin,s);
        int c=0;
        for(int i=0;i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                if(s[i+1]==' '){
                c++;
                }
            }
        }
        cout<<c+1<<endl;
    }
    return 0;
}