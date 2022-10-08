#include<iostream>
int main(){
	int cnt=0,arr[42]={0},a;
	for(int i=10;i>0;i--){
		std::cin>>a;
		a%=42;
		arr[a]++;
	}
	for(int i=41;i>=0;i--){
		if(arr[i]!=0){
			cnt++;
		}
	}
	std::cout<<cnt;
}