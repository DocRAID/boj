#include<iostream>
#include<algorithm>
int main(){
	int n,total=0,a,arr[1001]={0};
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr, arr+n);
	for(int i=0;i<n;i++){
		total+=(arr[i]*(n-i));
	}
	std::cout<<total;
}