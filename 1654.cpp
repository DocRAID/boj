#include<iostream>
int k,n;
int arr[10005];
bool solve(long long x){
	long long cur = 0;
	for(int i=0;i<k;i++){
		cur+=arr[i]/x;
	}
	return cur>=n;
}
int main() {
	std::cin>>k>>n;
	for(int i=0;i<k;i++){
		std::cin>>arr[i];
	}
	long long st = 1;
	long long en = 2147483647;
	while(st<en){
		long long mid= (st+en+1)/2;
		if(solve(mid)) st=mid;
		else en = mid-1;
	}
	std::cout<<st;
}