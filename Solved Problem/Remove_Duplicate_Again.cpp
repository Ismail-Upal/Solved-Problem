#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    while(true){
        int a;cin>>a;
        if(a==-1) break;
        mylist.push_back(a);
    }
    mylist.sort();
    mylist.unique();
    for(int v:mylist){
        cout<<v<<" ";
    }
    return 0;
}