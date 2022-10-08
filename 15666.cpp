#include<iostream>
#include<set>
int n,m,arr[10];
std::set<int>st;
void DFS(int cnt,int min){
	if(cnt==m){
		for(int i=0;i<cnt;i++){
			std::cout<<arr[i]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(auto i:st){
		if(i>=min){
			arr[cnt]=i;
			DFS(cnt+1,i);
		}
	}
}
int main(){
	std::cin>>n>>m;
	int input;
	for(int i=0;i<n;i++){
		std::cin>>input;
		st.insert(input);
	}
	DFS(0,0);
}