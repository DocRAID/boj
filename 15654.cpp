#include<iostream>
#include<algorithm>
#include<map>
std::map<int,int>mp;
int n,m;
bool vst[9];
int  sol[9];
void DFS(int a){
	if(a==m){
		for(int i=0;i<m;i++){
			std::cout<<mp[sol[i]]<<' '; 
		}
		std::cout<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(vst[i]==false){
			sol[a]=i;
			vst[i]=true;
			DFS(a+1);
			vst[i]=false;
		}
	}
}
int main(){
	std::cin>>n>>m;
	int list[9];
	for(int i=0;i<n;i++){
		std::cin>>list[i];
	}
	std::sort(list,list+n);
	for(int i=0;i<n;i++){
		mp[i]=list[i];
	}
	DFS(0);
}