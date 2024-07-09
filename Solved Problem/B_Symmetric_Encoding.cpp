#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        int n;cin>>n; 
        string s; cin>>s;
        string r=s;
        sort(r.begin(),r.end());
        int sz=unique(r.begin(), r.end())-r.begin();
        r.erase(r.begin()+sz, r.end());
        int i=0, j=r.size()-1;
        map<char,char>mp;
        while (i<=j)
        {
            mp[r[i]]=r[j];
            mp[r[j]]=r[i];
            i++;
            j--;
        }
        for(int i=0;i<n;i++){
            cout<<mp[s[i]];
        }
        cout<<endl;
    }
    return 0;
}