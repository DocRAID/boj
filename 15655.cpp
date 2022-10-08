#include<iostream>
#include<algorithm>
#include<map>
std::map<int,int>mp;
int n,m;
int arr[10],input[10];
bool vist[10];
void DFS(int cnt,int max){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<input[arr[i]-1]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(int i=max;i<=n;i++){
		if(!vist[i]){
			arr[cnt]=i;
			vist[i]=true;
			DFS(cnt+1,i+1);
			vist[i]=false;		
		}
	}
}
int main(){
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>input[i];
	}
	std::sort(input,input+n);
	DFS(0,1);
}