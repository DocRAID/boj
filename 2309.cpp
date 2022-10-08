#include<iostream>
#include<algorithm>
int main(){
	int arr[9];
	for(int i=0;i<9;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+9);
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			int count=0;
			for(int cnt=0;cnt<9;cnt++){
				if(cnt!=i&&cnt!=j){
					count+=arr[cnt];
				}
			}
			if(count==100){
				for(int cnt=0;cnt<9;cnt++){
					if(cnt!=i&&cnt!=j){
						std::cout<<arr[cnt]<<'\n';
					}
				}
				return 0;
			}
		}
	}
}