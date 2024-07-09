#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           a[i][j]=1;
        }
    
    }
    int b[3][3];
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
            if(b[i][j]%2!=0){
                a[i][j]=0;
                if((i+1)>=0 && (i+1)<3){
                    a[i+1][j]=0;
                }
                if((j+1)>=0 && (j+1)<3){
                    a[i][j+1]=0;
                }
                if((i-1)>=0 && (i-1)<3){
                    a[i][j]=0;
                }
                if((j-1)>=0 && (j-1)<3){
                    a[i][j]=0;
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}