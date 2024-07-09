#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t ;cin>>t;
    while(t--){
        int cn=0;
        int a[11][11];
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char c; cin>>c;

                //if(c=='X'){
                    if(i==1 || i==10 && j==1 || j==10)a[i][j]=1;//cn++;
                    else if(i==2 || i==9 && j==2 || j==9)a[i][j]=2;//cn+=2;
                    else if(i==3 || i==8 && j==3 || j==8)a[i][j]=3;//cn+=3;
                    else if(i==4 || i==7 && j==4 || j==7)a[i][j]=4;//cn+=4;
                    else if(i==5 || i==6 && j==5 || j==6)a[i][j]=5;//cn+=5;
                //}
            }
        }
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                

                //if(c=='X'){
                    cout<<a[i][j];
                //}
            }
            cout<<endl;
        }
        //cout<<cn<<endl;
            }
    return 0;
}