#include<iostream>
int is(int n){
	if(n<10){
		return n;
	}
	return n%10+is(n/10);
}
int main(){
	int n=123,ans=0;
	std::cin>>n;
	for(int i=1;i<1000001;i++)
	{
		if(n==i+is(i)){
			ans=i;
			break;
		}
	}
	std::cout<<ans;
}