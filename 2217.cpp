#include<iostream>
#include<algorithm>
bool comp(int a,int b){
	return a>b;
}
int bigger(int a,int b){
	if(a>=b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int n,max=0,arr[100000];
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n,comp);
	for(int i=0;i<n;i++){
		int index = (i+1)*arr[i];
		max=bigger(max,index);
	}
	std::cout<<max;
}