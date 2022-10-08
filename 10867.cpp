#include<iostream>
#include<set>
int main(){
	std::set<int> st;
	int n,input;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		st.insert(input);
	}
	for(auto a:st){
		std::cout<<a<<" ";
	}
}