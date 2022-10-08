#include<iostream>
#include<set>
int main(){
	std::set<std::string>st;
	int n;
	std::cin>>n;
	std::string name,is;
	for(int i=0;i<n;i++){
		std::cin>>name>>is;
		if(is=="enter"){
			st.insert(name);
		}
		else{
			st.erase(name);
		}
	}
	for(auto i=st.rbegin();i!=st.rend();i++){
		std::cout<<*i<<"\n";
	}
}
