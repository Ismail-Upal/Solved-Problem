#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    vector<int>v;
    
    while (t--)
    {
        string n; cin>>n;
        for(string i=1; i<=n; i++){
            for(int n: i){
                cout<<i;
            }
        }
    }
    
    return 0;
}