#include<iostream>
#include<algorithm>
int main(){
	int n,m,arr[1000];
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n);
	std::cout<<arr[n-m];
}