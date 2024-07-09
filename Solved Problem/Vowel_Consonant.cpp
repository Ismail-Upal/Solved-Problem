#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        for(char c:s){
             if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
                cout<<c;
            }
        }
        cout<<endl;
        for(char c:s){
             if(c!='a' && c!='e' && c!='i'&& c!='o' && c!='u' && c!=' '){
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}