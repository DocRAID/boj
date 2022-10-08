#include <iostream>
int star(int i, int j, int n){
	if((i / n) % 3 == 1 && (j / n) % 3 == 1){
		std::cout << " ";	
	}
	else if(n / 3 == 0){
		std::cout << "*";	
	}
	else{
		star(i, j, n / 3);	
	}
	return 0;
}
int main( ){
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			star(i, j, n);
		std::cout << '\n';
	}
    return 0;
}