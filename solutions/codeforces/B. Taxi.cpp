#include <iostream>
#include <map>

int main() {
	int n;
	std::cin >> n;
	int result = 0, aux;

	std::map<int, int> dict;
	dict[1] = 0;
	dict[2] = 0;
	dict[3] = 0;
	dict[4] = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		dict[aux]++;
	}
	
	result += dict[4] + dict[3] + (dict[2] / 2) ;

	dict[1] -= dict[3];

	if (dict[2] % 2 != 0) {	
		result++;
		dict[1] -= 2;
	}
	
	if (dict[1] > 0) {
		result += dict[1] / 4;
		if (dict[1] % 4 != 0) {
			result++;
		}
	}

	std::cout << result << std::endl;
	return 0;
}

