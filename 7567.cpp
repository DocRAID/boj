#include<iostream>
using std::string;
int main(){
	int result = 10;
	string a;
	std::cin>>a;
	for(int i=1;i<a.length();i++){
		if(a[i]==a[i-1]){
			result+=5;
		}
		else{
			result+=10;
		}
	}
	std::cout<<result;
}
