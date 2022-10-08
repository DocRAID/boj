#include<iostream>
long long arr[1000000][2];
int main() {
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	int n,m;
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>arr[i][0];
	}
	for(int i=0;i<m;i++){
		std::cin>>arr[i][1];
	}
	int a=0,b=0;
	for(int i=0;i<n+m;i++){
		if((arr[a][0]<arr[b][1] && a<n) || b>=m){
			std::cout<<arr[a][0]<<' ';
			a++;
		}
		else {
			std::cout<<arr[b][1]<<' ';
			b++;
		}
	}
}