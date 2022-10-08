#include<iostream>
int main(){
	int n,input,sum=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		sum=0;
		for(int j=1;j<=input;j++){
			if(j%2==1){
				sum+=j;
			}
		}
		std::cout<<sum<<"\n";
		
	}
}