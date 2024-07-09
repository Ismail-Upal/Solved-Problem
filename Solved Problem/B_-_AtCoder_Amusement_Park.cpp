#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int ak=k;
    queue<int>q;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        q.push(x);
    }
    int cnt=0;
    while(q.size()!=0){
        if(q.front()<=ak){
            ak=ak-q.front();
            q.pop();
        }
        if(q.front()<=ak){
            continue;
        }
        else {
            cnt++;
            ak=k;
        }
    }
    cout<<cnt+1;
    return 0;
}