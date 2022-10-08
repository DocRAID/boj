#include<iostream>
int n,m;
int result[1000];
int checklist[1000];

void dfs(int L){
	int i;
	if(L==m){
		for(i=0;i<m;i++){
			std::cout<<result[i]<<" ";
		}
		std::cout<<"\n";
	}
	else{
		for(i=1;i<=n;i++){
			if(checklist[i]==0){
				result[L]=i;
				checklist[i]=i;
				dfs(L+1);
				checklist[i]=0;
			}
		}
	}
}
int main(){
	std::cin>>n>>m;
	dfs(0);
}