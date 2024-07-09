#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;;
        list<int>a(n);
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            a.push_back(x);
            
        }
        cout<<a.front()<<a.back();
        int c=0;
        while(k>0){
            
            a.front()--;
            a.back()--;
            
            k-=2;
            if(a.front()==0){
                c++;
                a.pop_front();
            }
            if(a.back()==0){
                c++;
                a.pop_back();
            }
        }
        cout<<endl;
        
    }
    return 0;
}