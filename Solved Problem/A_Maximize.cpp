#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int y=x-1;
        int a=0;
        int mx=INT_MIN;
        for(int i=y;i>=1;i--){
            if(x%i==0 && y%i==0){
                int gcd=i;
                int num=gcd+y;
                if(num>mx){mx=max(mx,num);
                    a=y;
                }
            }
            if(i==1 && y>1){
                y--;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}