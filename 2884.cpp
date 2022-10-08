#include<iostream>
int main()
{
	int H,M;
	std::cin>>H>>M;
	M+=H*60-45;
	if(M<0){
		M+=24*60;
	}
	std::cout<<M/60<<" "<<M%60;
}