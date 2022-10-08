#include<iostream>
using std::string;
int main(){
	char in;
	int n,a=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>in;
		in=='A'?a++:a--;
	}
	if(a==0){
		std::cout<<"Tie";
	}
	else{
		std::cout<<(a>0?'A':'B');	
	}
	
}
