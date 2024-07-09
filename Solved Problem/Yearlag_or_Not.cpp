#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0; i<5; i++){
        if(a[i]<40){
            cnt++;
        }
    }
    if(cnt<3){
        cout<<"PASSED";
    }
    else{
        cout<<"YEARLAG";
    }
    return 0;
}