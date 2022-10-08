#include<iostream>
int main(){
	int max=0,maxIndex,input,sum;
	for(int i=1;i<=5;i++){
		sum=0;
		for(int j=0;j<4;j++){
			std::cin>>input;
			sum+=input;
		}
		if(max<sum){
			max=sum;
			maxIndex=i;
		}
	}
	std::cout<<maxIndex<<" "<<max;
}