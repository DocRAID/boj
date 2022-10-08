#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
long long arr[1000000];
int main(){
	std::set<long long>st;
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
		st.insert(arr[i]);
	}
	std::vector<long long> vt(st.begin(),st.end());
	for(int i=0;i<n;i++){
		auto it=lower_bound(vt.begin(),vt.end(),arr[i]);
		std::cout<< it - vt.begin()<<' ';
	}
}