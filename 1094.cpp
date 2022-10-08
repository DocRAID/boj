#include<iostream>
int main(){
	int n,stick=64,cnt=0;
	std::cin>>n;
	while(n!=0){
		if(stick<=n){
			cnt+=1;
			n-=stick;
		}
		else{
			stick/=2;
		}
	}
	std::cout<<cnt;
} 