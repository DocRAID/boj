#include <iostream>
#include <string>
int main() {
	int n, m;
	std::cin>>n>>m;
	std::string str = "";
	
	for (int i = 0; i < n; i++) {
		str = str + std::to_string(n);
	}
	if (str.length() > m) {
		std::cout << str.substr(0, m);
	}
	else {
		std::cout << str;
	}
}