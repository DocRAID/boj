#include<iostream>
#include<map>
using std::string;
int main(){
	std::map<string,string>mp;
	int team,problem;
	std::cin>>team>>problem;
	for(int i=0;i<team;i++){
		string teamName,memberName;
		int member;
		std::cin>>teamName>>member;
		for(int j=0;j<member;j++){
			std::cin>>memberName;
			mp.insert({memberName,teamName});
		}
		
	}
	for(int i=0;i<problem;i++){
		string probName;
		int whatProb;
		std::cin>>probName>>whatProb;
		string query=mp[probName]; 
		if(whatProb==1){
			std::cout<<query<<'\n';
		}
		else{
			for(auto i:mp){
				if(probName==i.second){
					std::cout<<i.first<<'\n';	
				}
			}
		} 
	}
}