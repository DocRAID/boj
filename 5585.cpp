#include<iostream>
int main(){
	int n=6,goal,arr[6]={500,100,50,10,5,1},cnt=0;
	std::cin>>goal;
	goal=1000-goal;
	for(int i=0;i<n;i++){
		if(arr[i]<=goal){
			cnt+=goal/arr[i];
			goal=goal%arr[i];
		}
		if(goal==0){
			break;
		}
	}
	std::cout<<cnt;
}