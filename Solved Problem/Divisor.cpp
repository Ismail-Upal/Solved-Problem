#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int c=1;
    while(t--){
        int n; cin>>n;
        cout<<"Case "<<c<<": ";
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
        cout<<n<<endl;
        c++;
    }
    return 0;
}