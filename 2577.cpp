#include<iostream>
int main(){
	long long total;
	int a,b,c,arr[10]={0};
	std::cin>>a>>b>>c;
	total=a*b*c;
	for(;total>10;){
		arr[total%10]++;
		total=total/10;
	}
	arr[total%10]++;
	for(int i=0;i<10;i++){
		std::cout<<arr[i]<<"\n";
	}
}