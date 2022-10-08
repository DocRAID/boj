#include<iostream>
int main(){
	int m,d,arr[13]={0,31,59,90,120,151,181,212,243,273,304,334,360};
	std::cin>>m>>d;
	if((arr[m-1]+d)%7==0){
		std::cout<<"SUN";
	}
	if((arr[m-1]+d)%7==1){
		std::cout<<"MON";
	}
	if((arr[m-1]+d)%7==2){
		std::cout<<"TUE";
	}
	if((arr[m-1]+d)%7==3){
		std::cout<<"WED";
	}
	if((arr[m-1]+d)%7==4){
		std::cout<<"THU";
	}
	if((arr[m-1]+d)%7==5){
		std::cout<<"FRI";
	}
	if((arr[m-1]+d)%7==6){
		std::cout<<"SAT";
	}
}