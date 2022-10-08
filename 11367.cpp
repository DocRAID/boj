#include<iostream>
int main(){
	int n,score;
	std::string name;
	char arr[12]="FFFFFFDCBAA";
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>name>>score;
		std::cout<<name<<" "<<arr[score/10];
		if((score>=67 &&score%10>=7)||score==100){
			std::cout<<'+';
		}
		std::cout<<"\n";
	}
}