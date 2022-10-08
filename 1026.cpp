#include<iostream>
#include<algorithm>
int main(){
	int n,cnt=0;
	int arrA[50],arrB[50];
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arrA[i];
	}
	for(int i=0;i<n;i++){
		std::cin>>arrB[i];
	}

	std::sort(arrA,arrA+n);
	std::sort(arrB,arrB+n);
	
	for(int i=0;i<n;i++){
		cnt+=arrA[i]*arrB[n-i-1];
//		std::cout<<arrA[i]<<" "<<arrB[n-i-1]<<"\n";
	}
	std::cout<<cnt;
}