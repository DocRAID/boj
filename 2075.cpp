#include<iostream>
#include<algorithm>
int arr[2250000]={0};
int main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
	int n,cnt;
	std::cin>>n;
	for(int i=0;i<n*n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+(n*n));

	std::cout<<arr[n*n-n];
}