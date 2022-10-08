#include<iostream>
#include<algorithm>
#include<cstdio>
int main() {
	int arr[5];
	double sum=0;
	for(int i=0;i<5;i++){
		std::cin>>arr[i];
		sum+=arr[i];
	}
	std::sort(arr,arr+5);
	printf("%.0f\n%d",sum/5,arr[2]);
}