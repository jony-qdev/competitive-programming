/*
 * tarifa
 * miguelcsx.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, n, ans;

    cin >> x >> n;

    ans = x + x * n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        ans -= p;
    }

    cout << ans << "\n";

    return 0;
}
