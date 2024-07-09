#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6;
ll a[N];
ll b[N];
ll d[N];
map<int, int>mp, res;
set<int>s;
//
void solve()
{
    mp.clear();
    res.clear();
    s.clear();
    int n, m;
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> a[i];
    for (int i = 1;i <= n;i++)
    {
        cin >> b[i];
        s.insert(b[i]);
        if (a[i] != b[i])
        {
            mp[b[i]]++;
        }
    }
    cin >> m;
    for (int i = 1;i <= m;i++)
    {
        cin >> d[i];
        res[d[i]]++;
    }
    if (!s.count(d[m]))
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1;i <= n;i++)
    {
        if (mp[b[i]] <= res[b[i]])
        {
            res[b[i]] -= mp[b[i]];
            mp[b[i]] = 0;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

}