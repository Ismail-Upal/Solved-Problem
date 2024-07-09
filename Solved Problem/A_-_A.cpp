#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        vector<int>v(0);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[x]=1;
        }
        for(int i=0;i<=9;i++){
            if(a[i]!=1){
                v.push_back(i);
                
            }
        }
        
    }
    
    return 0;
}