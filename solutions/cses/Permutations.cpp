#include <iostream>

int main() {
	int n;
	std::cin >> n;

	if (n < 4 && n != 1)
		std::cout << "NO SOLUTION" << std::endl;
	else{
		for (int i = (n == 4 ? 2 : 1); i <= n; i += 2) std::cout << i << ' ';
		for (int i = (n == 4 ? 1 : 2); i <= n; i += 2) std::cout << i << ' ';
	}
	return 0;
}
