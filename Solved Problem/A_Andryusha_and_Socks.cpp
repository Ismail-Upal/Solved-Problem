#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    n=2*n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int f[n]={0};
    int c=0;
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        f[v[i]]++;
     
        if(f[v[i]]==2)c--;
        else c++;

        m=max(m,c);
    }
    cout<<m;
    return 0;
}