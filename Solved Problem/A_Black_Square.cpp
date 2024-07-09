#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int sum=0;
    for(char i: s){
        int x=i-'0';
        if(x==1){
            sum+=a;
          
        }
        else if(x==2){
            sum+=b;
        
        }
        else if(x==3){
            sum+=c;
           
        }
        else if(x==4){
            sum+=d;
            
        }
    }
    cout<<sum;
    return 0;
}