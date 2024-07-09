#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        string s;

        vector<int>a(n,0),b(m,0);
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<m;j++){
                if(s[j]=='#'){
                    a[i]++;
                    b[j]++;
                }
            }
        }
        int x=max_element(a.begin(), a.end())-a.begin();
        int y=max_element(b.begin(), b.end())-b.begin();
        cout<<x+1<<" "<<y+1<<endl;
    }
    return 0;
}