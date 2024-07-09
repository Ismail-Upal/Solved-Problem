#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string a;
    cin>>a;
    stringstream ss(s);
    string w;
    int cnt=0;
    while(ss>>w){
        if(w==a){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}