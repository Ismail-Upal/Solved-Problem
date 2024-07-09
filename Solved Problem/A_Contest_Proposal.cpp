#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int i=0;
        int cnt=0;
        int sz=b.size();
        while(i<sz){
            if(b[i]<a[i]){
                a.pop_back();
                a.push_back(b[i]);
                sort(a.begin(), a.end());
                cnt++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}