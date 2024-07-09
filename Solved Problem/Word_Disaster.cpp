#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;getchar();
    while(t--){
       
        string s;
        getline(cin,s);
        stringstream ss(s);
        string w;
        while(ss>>w){
            for(int i=w.size()-1;i>=0; i--){
                cout<<w[i];
            }   
            cout<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

