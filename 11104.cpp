#include<iostream>
int main(){
	int n;
	char bit[24];
	std::cin>>n;
	for(int i=0;i<n;i++){
		long long result=0,cnt=1;
		for(int j=23;j>=0;j--){
			std::cin>>bit[j];
		}
		for(int j=0;j<24;j++){
			if(bit[j]=='1'){
				result+=cnt;
			}
			cnt=cnt+cnt;
		}
		std::cout<<result<<"\n";
	}
}