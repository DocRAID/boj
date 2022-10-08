#include<iostream>
int fac(int i){
	if(i<=1){
		return 1;
	}
	return i * fac(i-1);
}
int main(){
	int n,k;
	std::cin>>n>>k;
	std::cout<<fac(n)/(fac(n-k)*fac(k));
}