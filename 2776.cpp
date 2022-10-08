#include<iostream>
#include<algorithm>
#include<vector>
int main() {
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int cnt,input;
		std::vector<int> note;
		std::cin>>cnt;
		for(int j=0;j<cnt;j++){
			std::cin>>input;
			note.push_back(input);
		}
		std::sort(note.begin(),note.end());
		std::cin>>cnt;
		for(int j=0;j<cnt;j++){
			std::cin>>input;
			std::binary_search(note.begin(),note.end(),input)?std::cout<<"1\n":std::cout<<"0\n";
		}
	}
}