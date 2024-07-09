 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        string a="";
        string b="";
        for(int i=1;i<=n;i++){
            if(i%2){a+="##";b+="..";}
            else {a+="..";b+="##";}

        }
        for(int i=1;i<=n;i++){
           
                if(i%2)cout<<a<<endl<<a<<endl;
                else cout<<b<<endl<<b<<endl;
        }
        
    }
    return 0;
}