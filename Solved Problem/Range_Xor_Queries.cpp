#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,q; cin>>n>>q;
    int ar[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    int pre[n];
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]^ar[i];
    }
    while(q--){
        int a,b;cin>>a>>b;
        cout<<(pre[b]^pre[a-1])<<endl;
    }
    return 0;
}