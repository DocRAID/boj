#include<iostream>
#include<queue>
#include<vector>
int main(){
	std::ios_base::sync_with_stdio(false); 
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	int n,input;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		if(input==0){
			//출력 
			if(pq.empty()){
				//원소가 없으면 
				std::cout<<0<<'\n';
			}
			else{
				//있으면 
				std::cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
		else{
			//입력 
			pq.push(input);
		}
	}
}