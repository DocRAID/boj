#include<iostream>
#include<algorithm>
int n,arr[1000000];
int main() {
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n);
	for(int i=n-1;i>=0;i--){
		std::cout<<arr[i]<<'\n';
	}
}