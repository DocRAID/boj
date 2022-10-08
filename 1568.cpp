#include<iostream>
int main(){
	int n,cnt=1,sec=0;
	std::cin>>n;
	for(;n>0;){
		if(n>=cnt){
			n-=cnt;
			sec++;
		}
		else{
			cnt=0;
		}
		cnt++;
	}
	std::cout<<sec;
}