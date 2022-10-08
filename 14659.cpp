#include<iostream>
int comp(int a,int b){
	return a>b?a:b;
}
int main(){
	int n;
	std::cin>>n;
	int input,max=0,cnt=0,maxcnt=0;
	for(int i=0;i<n;i++){
		std::cin>>input;
		if(max<input){
			max=input;
			cnt=0;
		}
		else{
			cnt++;
		}
		maxcnt=comp(maxcnt,cnt);
	}
	std::cout<<maxcnt;
}