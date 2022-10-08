#include<iostream>
int main(){
	int x,y,block,min_h=300,max_h=-1;
	int result=2e9,resulth=-1;
	int arr[501][501];
	std::cin>>y>>x>>block;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			std::cin>>arr[i][j];
			if(arr[i][j]>max_h){
				max_h=arr[i][j];
			}
			else if(arr[i][j]<min_h){
				min_h=arr[i][j];
			}
		}
	}
	for(int i=min_h;i<=max_h;i++){
		int to_add=0,to_sub=0;
		for(int l=0;l<y;l++){
			for(int j=0;j<x;j++){
				if(i-arr[l][j]<0){
					to_sub+=(i-arr[l][j])*-1;
				}
				else{
					to_add+=i-arr[l][j];
				}
			}
		}
		if(to_add<=to_sub+block){
			int tmp=to_add+to_sub*2;
			if(tmp<=result){
				result=tmp;
				resulth=i;
			}
		}
	}
	std::cout<<result<<' '<<resulth;
}