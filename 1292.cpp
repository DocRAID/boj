#include<iostream>
#include<vector>
int main(){
	std::vector<int> vt;
	int cnt=0;
	for(int i=1;cnt<=1000;i++){
		for(int j=0;j<i;j++){
			vt.push_back(i);
			cnt++;
		}
	}
	cnt=0;
	int a,b;
	std::cin>>a>>b;
	for(int i=a-1;i<b;i++){
		cnt+=vt[i];
	}
	
	std::cout<<cnt;
}