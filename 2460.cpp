#include<iostream>
int main(){
	int cnt=0,max=0;
	for(int i=0;i<10;i++){
		int in,out;
		std::cin>>out>>in;
		cnt-=out;
		cnt+=in;
		if(cnt>max){
			max=cnt;
		}
	}
	std::cout<<max;
}