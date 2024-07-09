#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int c=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=v[i+1])c++;
    }
    cout<<c;
    return 0;
}