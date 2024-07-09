#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=n%10;
        int b=(n/10)%10;
        int c=n/100;

        
        int m=pow(a,3)+pow(b,3)+pow(c,3);
  
        if(m==n){
            cout<<n<<" is an armstrong number!"<<endl;
        }
        else cout<<n<<" is not an armstrong number!"<<endl;
    }
    return 0;
}