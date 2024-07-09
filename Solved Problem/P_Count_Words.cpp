#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int found=0;
    int cnt=0;
    for(char c:s){
        if(isalpha(c)){
            if(found==0){
                cnt++;
                found=1;
            }
        }
        else{
            found=0;
        }
    }
    cout<<cnt;
    return 0;
}