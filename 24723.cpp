#include<iostream>
int main(){
	int n,cnt=1;
	std::cin>>n;
	for(int i=0;i<n;i++){
		cnt*=2;
	}
	std::cout<<cnt;
}