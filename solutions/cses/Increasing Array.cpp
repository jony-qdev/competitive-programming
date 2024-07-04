#include <iostream>

int main() {
	int n;
	long long result = 0;
	std::cin >> n;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		if (arr[i - 1] > arr[i]) {	
			result += arr[i - 1] - arr[i];
			arr[i] += arr[i - 1] - arr[i];
		}
	}

	std::cout << result << std::endl;
	return 0;
}
