#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long int a,b;cin>>a>>b;
        long int c=0;
        
        for(long long int i=a; i<=b;i++){
            int f=0;
            for(long long int j=2; j<=sqrt(i); j++){
                
                if(i%j==0){
                    f=1;
                    break;
                }
            }
            if(f==0)c++;
        }
        cout<<c<<endl;
    }
    
    return 0;
}