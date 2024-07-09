#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        int a[26]={0};
        for(char c:s){
            int n=c-'a';
            a[n]++;
        }
        int flag[26]={0};
        for(char c:s){
            int n=c-'a';
            if(!flag[n]){
                cout<<c<<" = "<<a[n]<<endl;
                flag[n]=1;
            }
        }

        if(t>0)cout<<endl;
    }
    
    return 0;
}