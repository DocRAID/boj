#include<iostream>
#include<map>
int main() {
	int n;
	std::cin>>n;
	int count=0;
	std::map<int, int> map;
	for(;1;){
		int cnt=1;
		int index=n;
		for(;index>=10;){
			cnt++;
			index/=10;
		}
		if(n==cnt*index){
			std::cout<<"FA";
			return 0;
		}
		if(count==1000){
			std::cout<<"NFA";
			return 0;
		}
		n=cnt*cnt;
		count++;
	}
}