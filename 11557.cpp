#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int m,cost,index=0;
		std::string input,indexS;
		std::cin>>m;
		for(int j=0;j<m;j++){
			std::cin>>input>>cost;
			if(cost>index){
				index=cost;
				indexS=input;
			}
		}
		std::cout<<indexS<<'\n';
	}
}