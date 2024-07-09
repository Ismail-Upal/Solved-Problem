#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        priority_queue<int,vector<int>, greater<int>>pq;
        int n; cin>>n;
        while(n--){
            int x; cin>>x;
            pq.push(x);
        }
        int t; cin>>t;
        while(t--){
            int c; cin>>c;
            if(c==0){
                int x; cin>>x;
                pq.push(x);
                cout<<pq.top()<<endl;
            }
            if(c==1){
                if(pq.size()==0)cout<<"Empty"<<endl;
                else cout<<pq.top()<<endl;
            }
            if(c==2){
                if(pq.size()==0) cout<<"Empty"<<endl;
                else{
                    pq.pop();
                    if(pq.size()!=0) cout<<pq.top()<<endl;
                    else cout<<"Empty"<<endl;
                }
            }
           
        }
    
    return 0;
}