#include<iostream>
#include<stack>
#include<cstring>
int main(){
	int n,isYes;
	char arr[52]={0};
	std::cin>>n;
	for(int i=0;i<n;i++){
		isYes=0;
		std::stack<int> stk;
		std::cin>>arr;
		for(int j=0;j<strlen(arr);j++){
			if(arr[j]=='('){
				stk.push(1);
			}
			else{
				if(stk.size()>0){
					stk.pop();
				}
				else{
					isYes=1;
				}
			}
		}
		if(stk.size()!=0){
			isYes=1;
		}
		isYes==0?std::cout<<"YES\n":std::cout<<"NO\n";
	}
}