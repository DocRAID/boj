#include<iostream>
int main(){
	int n,noting;
	int a[50],max=0,min=100000;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		max<=a[i]?max=a[i]:(min>=a[i]?min=a[i]:noting++);
		min>=a[i]?min=a[i]:noting++;
	}
	std::cout<<min*max;
}