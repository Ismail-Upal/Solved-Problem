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
    int s=0,d=0;
    int i=0,j=n-1;
    int z=0;
    while(i<=j){
        if(z%2==0){
            if(v[i]<v[j]){
                s+=v[j];
                j--;
            }
            else{
                s+=v[i];
                i++;
            }
        }
        else{
            if(v[i]<v[j]){
                d+=v[j];
                j--;
            }
            else{
                d+=v[i];
                i++;
            }
        }
        z++;
    }
    cout<<s<<" "<<d;
    return 0;
}