#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;cin>>n>>h;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int w=0;
    for(int i: v){
        if(i<=h)w++;
        else w+=2;
    }
    cout<<w;
    return 0;
}