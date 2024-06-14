#include <iostream>

int main() {
	int arr[4];
	int min = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		std::cin >> arr[i];
		if (arr[i] < arr[min]) {
			min = i;
		}
		else if (arr[i] > arr[max]) {
			max = i;
		}
	}	
	std::cout << arr[max] - arr[min] << std::endl;
	return 0;
}
