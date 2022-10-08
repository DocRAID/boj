#include<iostream>
#include<algorithm>
#include<map>
int n,m;
int arr[10];
int index[10];
void DFS(int cnt){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<index[arr[i]]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		arr[cnt]=i;
		DFS(cnt+1);
	}
}
int main(){
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>index[i];
	}
	std::sort(index,index+n);
	DFS(0);
}