#include<iostream>
#include<algorithm>
int main(){
	int arrA[10],arrB[10];
	for(int i=0;i<10;i++){
		std::cin>>arrA[i];
	}
	for(int i=0;i<10;i++){
		std::cin>>arrB[i];
	}
	std::sort(arrA,arrA+10);
	std::sort(arrB,arrB+10);
	int sumA=0,sumB=0;
	for(int i=0;i<3;i++){
		sumA+=arrA[9-i];
		sumB+=arrB[9-i];
	}
	std::cout<<sumA<<" "<<sumB;
}