#include<iostream>
#include <string> 
int main(){
	int n;
	std::string a;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int x,y,total=0;
		std::cin>>x>>y;
		for(int j=x;j<=y;j++){
			a=std::to_string(j);
			for(int p=0;p<a.length();p++){
				if(a[p]=='0'){
					total++;
				}
			}
		}
		std::cout<<total<<'\n';
	}
}