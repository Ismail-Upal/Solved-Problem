#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    char s[100];
    gets(s);
    int l=0;
    for(int i=0; s[i]!='\0'; i++){
        l++;
    }
    cout<<l;
    return 0;
}