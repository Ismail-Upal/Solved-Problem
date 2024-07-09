#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,i=1000;
    while(i>=1){
        cout<<i<<" ";
        c++;
        if(c==5){
            cout<<endl;
            c=0;
        }
        i--;
    }
    return 0;
}