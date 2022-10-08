#include<iostream>
#include<queue>
std::queue<int>qu; 
int main(){
	int n;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		qu.push(i);
	}
	for(;qu.size()>1;){
		qu.pop();
		qu.push(qu.front());
		qu.pop();
	}
	std::cout<<qu.front();
}