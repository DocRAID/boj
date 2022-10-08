#include <iostream>
#include <stack>

int main(){
	std::stack<int> stac;
	int n,in,total=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>in;
		if(in==0 && stac.empty()==0){
			stac.pop();
		}
		else{
			stac.push(in);	
		}
	}
	for(;!stac.empty();){
		total+=stac.top();
		stac.pop();
	}
	std::cout<<total;
}