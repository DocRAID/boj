#include<iostream>
using std::string;
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		string a,b;
		std::cin>>a>>b;
		std::cout<<"Distances: ";
		for(int j=0;j<a.length();j++){
			int result = b[j]-a[j];
			if(result < 0){
				result += 26;
			}
			std::cout<<result<<' ';
		}
		std::cout<<'\n';
	}
}