#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                r=i;c=j;
            }
        }
    }
    int s=0;
    while(r!=2 || c!=2){
        if(r>2){
            r--;s++;
        }
        else if(r<2){
            r++;s++;
        }
        if(c>2){
            c--;s++;
        }
        else if(c<2){
            c++;s++;
        }
    }
    cout<<s;
    return 0;
}