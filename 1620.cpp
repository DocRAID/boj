#include<iostream>
#include<map>
#include<string>
using std::string;
int main(){
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	std::map<string, int> findNum;
	std::map<int, string> findName;
	int n,m;
	std::cin>>n>>m;
	string input;
	for(int i=1;i<=n;i++){
		std::cin>>input;
		findNum.insert({input,i});
		findName.insert({i,input});
	}
	for(int i=0;i<m;i++){
		std::cin>>input;
		if(input[0]>='A'){
			//이건 이름 들어온거 처리 
			std::cout<<findNum[input]<<'\n';
		}
		else{
			int a=std::stoi(input);
			std::cout<<findName[a]<<'\n';
		}
	}
}