#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int freq[26]={0};
        int cnt=0;
        for(int i=0; i<a; i++){
            if(freq[s[i]-'A']==0){
                cnt+=2;
                freq[s[i]-'A']=1;
            }
            else{
                cnt++;
            }
            
        } 
        cout<<cnt<<endl;
    }
    return 0;
}