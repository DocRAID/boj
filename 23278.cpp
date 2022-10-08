#include<iostream>
#include<algorithm>
#include<stdio.h>
int main(){
	int n,l,r;
	int arr[51]={0};
	std::cin>>n>>l>>r;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n);
	double sum=0;
	for(int i=l;i<n-r;i++){
		sum+=arr[i];
	}
	sum/=(n-l-r);
	printf("%.10lf",sum);
}