#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll singleSum = 1+2+3+4+5+6+7+8+9;

        ll x = n/9;
        ll result = 0;

        result += (x*singleSum);

        ll y = n%9;
        ll num=1;
        for(ll i=1; i<=y; i++) {
            result += num;
            num++;
        }
        cout << result << '\n';

    }
    return 0;
}