/*
 * ofugsnuid
 * miguelcsx.cpp
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	stack<int> numbers;

	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		numbers.push(x);
	}

	for (int i = 0; i < n; i++){
		cout << numbers.top() << '\n';
		numbers.pop();
	}

}
