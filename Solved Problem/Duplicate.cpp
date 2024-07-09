#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<a.size(); i++){
        cin>>a[i];
    }
    int flag=0;
    for(int i=0; i<a.size()-1; i++){
        for(int j=i+1; j<a.size(); j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
            
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}