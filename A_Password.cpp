#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }

        int k = 10 - n;
        long long ans = 1LL * k * (k - 1) / 2 * 6;

        cout << ans << '\n';
    }

    return 0;
}