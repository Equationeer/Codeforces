#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long pref = 0;
    long long mn = LLONG_MAX;

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;

        pref += x;
        mn = min(mn, pref / i);

        cout << mn;
        if (i != n)
            cout << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}