#include<iostream>
#include<algorithm>
int n,m,arr[5000000];
int main(){
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
    std::cin>>n>>m;
    for(int i=0;i<n;i++){
    	std::cin>>arr[i];
	}
	std::sort(arr,arr+n);
	std::cout<<arr[m-1];
}