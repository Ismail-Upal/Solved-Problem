#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void move(int n,char sou, char aux, char des){
    if(n<1)cout<<"Error"<<endl;
    else if(n==1)cout<<n<<"Disk moved from "<<sou<<" to "<<des<<endl;
    else{
        move(n-1, sou, des, aux);
        move(1, sou, aux, des);
        move(n-1, aux, sou, des);
    }
}
int main()
{
    optimize();
    int n;cin>>n;
    move(n,'A', 'B','C');

    return 0;
}