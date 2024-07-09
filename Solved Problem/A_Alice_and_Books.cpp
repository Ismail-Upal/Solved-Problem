#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define pob(x) pop_back(x)
//#define v vector<int>
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define foro(n) for(int i=0;i<int(n);i++)
#define for1(n) for(int i=1;i<=int(n);i++)
#define fup(a,n) for(int i=a;i<int(n);i++)
#define tc int t;cin>>t;while(t--)
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define yn                 \
    cout << "YES" << endl; \
    else cout << "NO" << endl;
#define om cout << "-1" << endl
#define sz(x) (int)x.size()

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n; cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
    int s=0,mx=0;
     for(int i=n-2;i>=0;i--){
         mx=max(v[i],mx);
     }
    mx+=v[n-1];
    cout<<mx<<endl;
  }
  return 0;
}