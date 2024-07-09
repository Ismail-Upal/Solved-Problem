#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
  
    vector<int>v(n*n);

    v[0]=2;
    for(int i=1,j=3;i<=n*n; j++){
        if(j%2!=0){
            v[i]=j;
            i++;
        }
    }
    for(int i: v)cout<<i<<endl;
    return 0;
}
