#include<iostream>
#include<set>
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::set<int> mp;
	std::set<int>::iterator iter;
	int input;
	int n,m;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>input;
		mp.insert(input);
	}
    std::cin>>m;
	for(int i=0;i<m;i++){
		std::cin>>input;
		iter = mp.find(input);
	    if(iter != mp.end()){
	        std::cout<<1<<'\n';
	    }
        else{
            std::cout<<0<<'\n';
        }

	}
}