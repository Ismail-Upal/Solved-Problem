#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int t; cin>>t;
    while (t--)
    {
        string s;cin>>s;

        if(s=="X++"){
            n++;
        }
        else if(s=="X--"){
            n--;
        }
        else if(s=="++X"){
          ++n;
        }
        else if(s=="--X"){
        --n;
        }
    }
    
    cout<<n;
    return 0;
}