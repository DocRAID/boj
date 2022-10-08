#include<iostream>
using std::string;
int main(){
	int n,a=0,in;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>in;
		in==1?a++:a--;
	}
	std::cout<<"Junhee is ";
	std::cout<<(a<0?"not cute!":"cute!");
}
