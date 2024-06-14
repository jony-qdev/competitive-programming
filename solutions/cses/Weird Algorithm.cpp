#include <iostream>

void solution(long unsigned int n) {
	if (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		} else {
			n = n * 3 + 1;
		}

		std::cout << n << ' ';
		solution(n);
	}
}

int main() {
	long unsigned int n;
	std::cin >> n;
	std::cout << n << ' ';
	solution(n);
	return 0;
}
