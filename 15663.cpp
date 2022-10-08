#include<iostream>
#include<map>
int n,m,arr[10],same;
bool vist[10];
std::map<int,int>mp;
void DFS(int cnt){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<arr[i]<<' ';
		}
//		std::cout<<"Status:";
//		for(int i=0;i<cnt;i++){
//			std::cout<<mp[arr[i]]<<' ';
//		}
		std::cout<<'\n';
		return;
	}
	for(auto &i:mp){
		if(i.second>0){
			arr[cnt]=i.first;
			i.second-=1;
			DFS(cnt+1);
			i.second+=1;
		}
	}
}
int main(){
	std::cin>>n>>m;
	int index;
	for(int i=0;i<n;i++){
		std::cin>>index;
		mp[index]+=1;
	}
	DFS(0);
}