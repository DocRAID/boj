#include<iostream>
#include<set>
using std::string;
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::set<string> mp;
	std::set<string>::iterator iter;
	string input;
	int n,m;
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>input;
		mp.insert(input);
	}
	int cnt=0;
	for(int i=0;i<m;i++){
		std::cin>>input;
		iter = mp.find(input);
	    if(iter != mp.end()){
	        cnt++;
	    }

	}
	std::cout<<cnt;
}