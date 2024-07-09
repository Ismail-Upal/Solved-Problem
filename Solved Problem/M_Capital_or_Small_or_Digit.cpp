#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='0' && a<='9'){
        cout<<"IS DIGIT\n";
    }
    else if(a>='A' && a<='z'){
        cout<<"ALPHA\n";
        if(a>='A' && a<='Z'){
            cout<<"IS CAPITAL\n";
        }
        else{
            cout<<"IS SMALL\n";
        }
    }
    
    return 0;
}