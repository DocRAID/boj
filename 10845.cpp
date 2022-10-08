#include<iostream>
#include<queue>
std::queue<int>qu; 
int main(){
	int n,num;
	char arr[10]={0};
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr;
		if(arr[0]=='p'&&arr[1]=='u'){
			std::cin>>num;
			qu.push(num);
		}
		else if(arr[0]=='p'&&arr[1]=='o'){
			if(qu.empty()){
				std::cout<<"-1\n";
			}
			else{
				std::cout<<qu.front()<<"\n";
				qu.pop();
			}
		}
		else if(arr[0]=='s'){
			std::cout<<qu.size()<<"\n";
		}
		else if(arr[0]=='e'){
			std::cout<<qu.empty()<<"\n";
		}
		else if(arr[0]=='f'){
			if(qu.empty()){
				std::cout<<"-1\n";
			}
			else{
				std::cout<<qu.front()<<"\n";
			}
		}
		else if(arr[0]=='b'){
			if(qu.empty()){
				std::cout<<"-1\n";
			}
			else{
				std::cout<<qu.back()<<"\n";
			}
		}
	}
		
}