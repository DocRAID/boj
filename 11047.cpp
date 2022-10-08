#include<iostream>
int main(){
	int n,m,arr[11]={0},cnt=0;
	std::cin>>n>>m;
	for(int i=n-1;i>=0;i--){
		std::cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(m/arr[i]!=0){
			cnt+=m/arr[i];
			m%=arr[i];
		}
	}
	std::cout<<cnt;
}