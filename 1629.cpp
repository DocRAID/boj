#include<iostream>
long long pow(long long a,long long b,long long m){
		if(b==1) return a%m;
		long long val = pow(a,b/2,m);
		val = val * val % m;
		if(b%2==0) return val;
		return val * a %m;
	}
int main(){
	long long a,b,c;
	std::cin>>a>>b>>c;
	std::cout<<pow(a,b,c);
}