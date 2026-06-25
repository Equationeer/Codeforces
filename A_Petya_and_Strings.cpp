#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, n;
    cin >> s >> n;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(n.begin(), n.end(), n.begin(), ::tolower);

    if (s > n) {
        cout << 1;
    }
    else if (s < n) {
        cout << -1;
    }
    else {
        cout << 0;
    }

    return 0;
}