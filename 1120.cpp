#include<iostream>
std::string a,b;
int compare(int i){
	int cnt=0;
	for(int j=0;j<a.length();j++){
		if(a[j]!=b[j+i]){
			cnt++;
		}
	}
	return cnt;
}
int main() {
	std::cin>>a;
	std::cin>>b;
	int min = 50;
	for(int i=0;i<b.length()-a.length()+1;i++){
		int now = compare(i);
		if(now<min){
			min=now;
		}
	}
	std::cout<<min;
}