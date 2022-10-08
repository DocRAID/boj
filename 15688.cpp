#include<iostream>
int arr[2000001];
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int input;
		std::cin>>input;
		arr[input+1000000]++;
	}
	for(int i=0;i<=2000000;i++){
		for(int j=0;j<arr[i];j++){
			std::cout<<i-1000000<<'\n';
		}
	}
} 