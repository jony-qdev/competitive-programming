#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A, I;

	cin >> A >> I;

	// Use of the celing formula
	cout << ((I - 1) * A) + 1;

	return 0;
}
