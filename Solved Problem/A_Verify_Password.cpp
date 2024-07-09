#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int oc=1;
        int od=1;
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                oc=0;
            }
            
        }
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                od=0;
            }
        }
        if(oc==1 || od==1){
            string s1=s;
            sort(s1.begin(), s1.end());
            if(s==s1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        int f=0;
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z')&&(s[i+1]>='0' && s[i+1]<='9')){
                cout<<"NO"<<endl;
                f=1;
                break;
            } 
        }
        if(f==0){
            string s1=s;
            sort(s1.begin(), s1.end());
            if(s1==s)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}