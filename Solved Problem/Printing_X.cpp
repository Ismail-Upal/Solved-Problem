#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=ceil(n/2.0);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==x && j==x){
                cout<<"X";
            }
            else if(i==j){
                cout<<"\\";
            }
            else if(i+j==n+1){
                cout<<"/";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
