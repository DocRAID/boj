#include<iostream>
#include<cmath>
int main(){
	int n,arr[50];
	long long result=0;
	char input;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		arr[i]=input-96;
		result+=arr[i]*pow(31,i);
	}
	std::cout<<result;
}