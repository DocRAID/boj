#include<iostream>
int n,m;
bool vst[9];
int  sol[9];
void DFS(int a){
	if(a==m){
		for(int i=0;i<m;i++){
			std::cout<<sol[i]<<' '; 
		}
		std::cout<<'\n';
		return;
	}
	for(int i=1;i<=n;i++){
		if(vst[i]==false){
			sol[a]=i;
//			vst[i]=true;
			DFS(a+1);
//			vst[i]=false;
		}
	}
}
int main(){
	std::cin>>n>>m;
	DFS(0);
}