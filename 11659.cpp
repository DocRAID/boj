#include<iostream>
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n,m,arr[100001],cnt=0,input;
	std::cin>>n>>m;
	for(int i=1;i<=n;i++){
		std::cin>>input;
		cnt+=input;
		arr[i]=cnt;
	}
	for(int i=0;i<m;i++){
		int a,b,cnt=0;
		std::cin>>a>>b;
		cnt=arr[b]-arr[a-1];
		std::cout<<cnt<<'\n';
	}
}