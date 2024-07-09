#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        string a ;cin>>a;
        string b; cin>>b;
        ll lena=a.size();
        ll lenb=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(), b.end());
        int i=0,j=0,c=0;

        while(j<lenb || i<lena){
            if(a[i]==b[j]){
                j++;
                c++;
            }
            if(b[j]>a[i]){  
                i++;
            }
            else j++;
        }
        cout<<c<<endl;
    }
    return 0;
}