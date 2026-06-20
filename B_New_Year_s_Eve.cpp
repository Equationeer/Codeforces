#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n << "\n";
        return 0;
    }

    long long ans = 1;

    while (ans <= n)
        ans <<= 1;

    cout << ans - 1 << "\n";

    return 0;
}