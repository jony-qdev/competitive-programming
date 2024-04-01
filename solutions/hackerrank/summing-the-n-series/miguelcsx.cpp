/*
 * Summing the N series
 * miguelcsx.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << (long long) n * n % 1000000007 << "\n";
    }


    return 0;
}