#include<iostream>
int main(){
	int n;
	std::cin>>n;
	for(int j=0;j<n;j++){
		long long a,b,min,index=1;
		std::cin>>a>>b;
		a>b?min=b:min=a;
		for(int i=2;i<=min;i++){
			if(a%i==0&&b%i==0){
				index=i;
			}
		}
		std::cout<<(a * b) /index<<"\n";
	}
	
}