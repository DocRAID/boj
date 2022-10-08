#include<iostream>
using std::string;
int main(){
	string a;
	int cnt=0;
    std::getline(std::cin,a);
    for(int i=0;i<a.length();i++){
    	if(cnt==0&&a[i]=='U'){
    		cnt++;
		}
		if(cnt==1&&a[i]=='C'){
    		cnt++;
		}
		if(cnt==2&&a[i]=='P'){
    		cnt++;
		}
		if(cnt==3&&a[i]=='C'){
    		cnt++;
		}
	}
	if(cnt==4){
		std::cout<<"I love UCPC";
	}
	else{
		std::cout<<"I hate UCPC";
	}
}