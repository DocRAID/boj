#include<iostream>
#include<set>
int main(){
	std::set<int> st;
	int n,m,input;
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>input;
		st.insert(input);
	}
	for(int i=0;i<m;i++){
		std::cin>>input;
		st.erase(input);
	}
	std::cout<<st.size()<<std::endl;
	for(auto i:st){
		std::cout<<i<<" ";
	}
}