#include<iostream>
int main(){
	int n,cnt=0,x,y;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>x>>y;
		cnt+=y%x;
	}
	std::cout<<cnt;
}