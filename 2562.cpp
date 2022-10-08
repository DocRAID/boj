#include<iostream>
int main(){
	int a,max=0,index;
	for(int i=0;i<9;i++){
		std::cin>>a;
		if(a>max){
			max=a;
			index=i+1;
		}
	}
	std::cout<<max<<"\n"<<index;
}