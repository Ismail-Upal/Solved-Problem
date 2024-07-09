#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n;cin>>n;
    if(n==1)cout<<1;
    else if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else if(n<4)cout<<"NO SOLUTION"<<endl;
    else {
        if(n%2!=0){
            int i=1;
            int m=n;
            while(n--){
                
                cout<<i<<" ";
                if(i==m)i=2;
                else i+=2;
                
            }
        }
        else{
            int i=1;
            int m=n-1;
            while(m--){
                cout<<i<<" ";
                if(i==n-1)i=2;
                else i+=2;
            }
            cout<<n;
        }
    }
    return 0;
}