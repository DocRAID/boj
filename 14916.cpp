#include<iostream>
int main() {
	int n;
	int cnt=0;
	std::cin>>n;
	if(n<2 || n==3){
		std::cout<<-1;
		return 0;

	}
	if((n%5)%2==1){
		cnt=(n/5)-1;
	}
	else{
		cnt=n/5;
	}
	n=n-(cnt*5);
	cnt+=n/2;

	std::cout<<cnt;
}