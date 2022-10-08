#include<iostream>
long long comp(long long a,long long b){
	return (a>b?a:b);
}
int main(){
    long long a, b, c;
    std::cin>>a>>b>>c;
    std::cout<<comp((double)(a*b)/c,((double)a/b)*c);
    return 0;
}