// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define dl double
// #define endl "\n"
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int main()
// {
//     optimize();
//     ll t; cin>>t;
//     while (t--)
//     {
//         ll n; cin>>n;
//         if(n==3)cout<<3<<endl;
//         else cout<<2<<endl;

//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll sum=0;
    for(int i=2;i<=100;i+=2)sum+=i;
    cout<<sum;
    return 0;
}