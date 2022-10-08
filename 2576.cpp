#include<iostream>
int main(){
	int n,min=100,sum=0;
	for(int i=0;i<7;i++){
		std::cin>>n;
		if(n%2==1){
			sum+=n;
			if(min>n){
				min=n;
			}
		}
	}
	min==100 && sum==0?std::cout<<"-1":std::cout<<sum<<"\n"<<min;
}