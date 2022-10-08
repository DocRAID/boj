#include<iostream>
#include<map>
using std::string;
std::map<int,bool> mp;

void setup(){
	for(int i=1;i<=20;i++){
		mp[i]=false;
	}
}
void allset(){
	for(int i=1;i<=20;i++){
		mp[i]=true;
	}
}
int main(){
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	setup();
	int n,in;
	string add="add",remove="remove",check="check",toggle="toggle",all="all";
	std::cin>>n;
	for(int i=0;i<n;i++){
		string input;
		std::cin>>input;
		if(!input.compare(add)){
			std::cin>>in;
			mp[in]=true;
		} else if(!input.compare(remove)){
			std::cin>>in;
			mp[in]=false;
		} else if(!input.compare(check)){
			std::cin>>in;
			std::cout<<(mp[in]?1:0)<<'\n';
		} else if(!input.compare(toggle)){
			std::cin>>in;
			mp[in]?mp[in]=false:mp[in]=true;
		} else if(!input.compare(all)){
			allset();
		} else{
			setup();
		}
	}
}








