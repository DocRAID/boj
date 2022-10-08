#include<iostream>
#include<algorithm>
int n,m,arr[10],index[10];
void DFS(int cnt,int sml){
	if(cnt==m){
		for(int i=0;i<m;i++){
			std::cout<<index[arr[i]]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(int i=sml;i<n;i++){
		arr[cnt]=i;
		DFS(cnt+1,i);
	}
}
int main(){
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>index[i];
	}
	std::sort(index,index+n);

	DFS(0,0);
}