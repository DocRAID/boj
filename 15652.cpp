#include<iostream>
int n,m;
int arr[9];


void sol(int index,int cnt){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<arr[i]<<' ';	
		}
		std::cout<<'\n';
		return;
	}
	for(int i=index;i<=n;i++){
		arr[cnt]=i;
		sol(i,cnt+1);
	}
}
int main(){
	std::cin>>n>>m;
	sol(1,0);
}