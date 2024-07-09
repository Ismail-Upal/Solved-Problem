#include<bits/stdc++.h>
using namespace std;
class freq
{
    public:
    char val;
    int cnt;
};
bool cmp(freq a,freq b)
{
    return a.cnt>b.cnt;
}
int main()
{
    string s;
    cin>>s;
    freq f[26];
    for(int  i=0; i<26; i++){
        f[i].val=char(i+'a');
        f[i].cnt=0;
    }
    for(char c:s){
        int ascii=int (c-'a');
        f[ascii].cnt++;
    }
    sort(f,f+26,cmp);
    for(int i=0; i<26; i++){
        if(f[i].cnt>0){
            cout<<
        }
    }    
    return 0;
}