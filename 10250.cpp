#include<iostream>
int main(){
	int RQ,H,W,N;
	std::cin>>RQ;
	for(int i=0;i<RQ;i++){
		std::cin>>H>>W>>N;
		int cntH=1,cntW=1;
		for(int j=1;j<N;j++){
			cntH++;
			if(cntH>H){
				cntH=1;
				cntW++;
			}
		}
		if(cntW>=10){
			std::cout<<cntH<<cntW<<'\n';
		}
		else{
			std::cout<<cntH<<'0'<<cntW<<'\n';
		}
	}
}