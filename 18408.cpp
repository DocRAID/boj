#include<iostream>
#include<map>
int main() {
	std::map<int,int>mp;
	int max=0,maxcnt=0;
	for(int i=0;i<3;i++){
		int input;
		std::cin>>input;
		mp[input]++;
		if(maxcnt<mp[input]){
			max=input;
			maxcnt=mp[input];
		}
	}
	std::cout<<max;
}