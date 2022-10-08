#include<iostream>
int main() {
	int n;
	std::cin>>n;
	for (int i = 1; i <= n; i++) {
		for (int j = i-1; j > 0; j--)std::cout<<' ';
		for (int k=2*n-i*2+1; k > 0; k--)std::cout<<'*';
		std::cout<<'\n';
	}
	for (int i = n-1; i > 0; i--) {
		for (int j = i-1; j > 0; j--)std::cout<<' ';
		for (int k = 2 * n - 2 * i+1; k > 0; k--)std::cout<<'*';
	    std::cout<<'\n';
	}
}