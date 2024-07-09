#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while(cin.getline(s,100005)){
       
        int len=strlen(s);
        sort(s,s+len);
        
       for(int i=0; i<strlen(s); i++){
        if(s[i]==' '){
            continue;
        }
        else{
            cout<<s[i];
        }
       }
       cout<<endl;
    
    }
    
    return 0;
}