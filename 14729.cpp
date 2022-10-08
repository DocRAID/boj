#include<iostream>
#include<queue>
#include<vector>
#include<stdio.h>
int main(){
	int n;
	std::priority_queue<double,std::vector<double>,std::greater<double>> heap;
	
	std::cin>>n;
	for(int i=0;i<n;i++){
		double input;
		std::cin>>input;
		heap.push(input);
	}
	for(int i=0;i<7;i++){
		printf("%.3f\n",heap.top());
		heap.pop();
	}
}