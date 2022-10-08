#include<iostream>
#include<algorithm>
int main(){
	int n,sub,arr[100];
	std::cin>>n;
	for(int i=0;i<n;i++){
		int max=0,min=100,gap=0;
		std::cin>>sub;
		for(int j=0;j<sub;j++){
			std::cin>>arr[j];
		}
		std::sort(arr,arr+sub);
		for(int j=1;j<sub;j++){
			if((arr[j]-arr[j-1])>gap){
				gap=(arr[j]-arr[j-1]);
			}
		}
		std::cout<<"Class "<<i+1<<"\nMax "<<arr[sub-1]<<", Min "<<arr[0]<<", Largest gap "<<gap<<"\n";
	}
}