#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (n >= 31) {
        cout << m << '\n';
    } else {
        cout << (m % (1LL << n)) << '\n';
    }

    return 0;
}