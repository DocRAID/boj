#include<iostream>
#include<algorithm>
int arr[500000],n;
int bin_search(int in){
	int L=0,R=n,M;
	while(L<=R){
		M=(L+R)/2;
		if(arr[M]==in){
			return 1;
		}
		else if(arr[M]<=in){
			L=M+1;
		}
		else{
			R=M-1;
		}
	}
	return 0;
}
int main(){
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n);
	
	int find,to;
	std::cin>>find;
	for(int i=0;i<find;i++){
		std::cin>>to;
		if(bin_search(to)){
			std::cout<<"1 ";
		}
		else{
			std::cout<<"0 ";
		}
	}
}