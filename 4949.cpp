#include<iostream>
#include<stack>
#include<cstring>
int main(){
	int n,isYes;
	for(;1;){
		isYes=0;
		std::string arr;
		std::stack<int> stk1;
		std::getline(std::cin, arr);
		if(arr[0]!='.'){
			for(int j=0;j<arr.size();j++){
				if(arr[j]=='('||arr[j]==')'){
					if(arr[j]=='('){
						stk1.push(1);
					}
					else{
						if(stk1.size()>0&&stk1.top()==1){
							stk1.pop();
						}
						else{
							isYes=1;
						}
					}
				}
				if(arr[j]=='['||arr[j]==']'){
					if(arr[j]=='['){
						stk1.push(2);
					}
					else{
						if(stk1.size()>0&&stk1.top()==2){
							stk1.pop();
						}
						else{
							isYes=1;
						}
					}
				}
			}
			if(stk1.size()!=0){
				isYes=1;
			}
		}
		else{
			return 0;
		}
		isYes==0?std::cout<<"yes\n":std::cout<<"no\n";
	}
}