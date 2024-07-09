#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    vector<int>v;
    for(int i:s){
        v.push_back(i);
    }
    
    int min=v[0];
    if(v.size()==1)  cout<<"NO";
    else cout<<v[1];
    return 0;
    
}