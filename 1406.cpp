#include<iostream>
#include <list>
int main() {
	std::list<char>list;
	int n;
	std::string input;
	std::cin>>input;
	std::cin>>n;

	for(auto i:input){
		list.push_back(i);
	}
	auto iter = list.end();
	for(int i=0;i<n;i++){
		char cmd;
		std::cin>>cmd;
		if(cmd=='L'){ //왼쪽으로
			if(iter!=list.begin()){
				iter--;
			}
		}
		if(cmd=='D'){ //오른쪽으로
			if(iter!=list.end()){
				iter++;
			}
		}
		if(cmd=='B'){ //왼쪽 문자 삭제
			if(iter!=list.begin()){
				std::list<char>::iterator it = iter;
				it--;
				list.erase(it);
			}
		}
		if(cmd=='P'){ //문자를 추가
			char some;
			std::cin>>some;
			list.insert(iter,some);
		}
	}
	for(auto i:list){
		std::cout<<i;
	}

}