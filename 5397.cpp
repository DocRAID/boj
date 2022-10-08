#include<iostream>
#include<list>
int main() {
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::list<char> list;
		std::string input;
		std::cin>>input;
		auto iter = list.begin();
		for(auto i:input){
			if(i=='<'){
				if(iter!=list.begin()){
					iter--;
				}
			}
			else if(i=='>'){
				if(iter!=list.end()){
					iter++;
				}
			}
			else if(i=='-'){ //backspace
				if(iter!=list.begin()){
					std::list<char>::iterator it = iter;
					it--;
					list.erase(it);
				}
			}
			else {
				list.insert(iter,i);
			}
		}
		for(auto i:list){
			std::cout<<i;
		}
		std::cout<<'\n';
	}
}