#include <iostream>

unsigned short solution(unsigned short e, unsigned short f, unsigned short c){
	
	if (e + f < c){
		return 0;
	}
	else {
		return ((e + f) / c) + solution((e + f) % c, (e + f)/c, c);
	}
}

int main(){
	unsigned short e, f, c;

	std::cin >> e >> f >> c;

	std::cout << solution(e, f, c) << std::endl;
	return 0;
}
