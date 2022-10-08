#include<iostream>

int main(){
	double arr[1000]={0},max=0,total=0;
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
		if(max<arr[i]){
			max=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		total+=arr[i]/max*100;
	}
	std::cout<<total/n;
}