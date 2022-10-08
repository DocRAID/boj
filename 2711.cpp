#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int num;
		std::string word;
		std::cin>>num>>word;
		for(int j=0;j<word.length();j++){
			if(num-1!=j){
				std::cout<<word[j];
			}
		}
		std::cout<<"\n";
	}
}