#include<iostream>
int main() {
	int n,m;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int mony;
		std::cin>>mony;
		std::cin>>m;
		for(int j=0;j<m;j++){
			int si,bal;
			std::cin>>si>>bal;
			mony+=si*bal;
		}
		std::cout<<mony<<'\n';
	}
}
