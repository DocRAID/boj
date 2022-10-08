#include<iostream>
int main(){
	std::string a;
	std::cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-='z'-'Z';
		}
		else if(a[i]>='A' and a[i]<='Z'){
			a[i]+='z'-'Z';
		}
	}
	std::cout<<a;
}