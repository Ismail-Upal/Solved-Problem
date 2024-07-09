#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        int co=0;
        for(char c:s){
            if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u'){
                co++;
            }
        }
        cout<<"Number of vowels = "<<co<<endl;
    }
    return 0;
}