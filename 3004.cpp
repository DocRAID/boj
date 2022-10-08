#include <iostream>

int main(){
	std::cin.tie(0);
	int N;
	std::cin >> N;
	int row = N / 2 + 1;
	int col = N - row + 2;
	int result = row * col;
	std::cout << result;
	return 0;
}
