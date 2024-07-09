
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> k;

    sort(a.begin(), a.end());

    int c = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        int s = a[l] + a[r];
        if (s == k) {
            c++;
            l++;
            r--;
        } else if (s < k) {
            l++;
        } else {
            r--;
        }
    }

    cout << c << endl;

    return 0;
}