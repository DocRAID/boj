#include<iostream>
bool v[9];
int arr[9];
int n,m;
void solv(int cnt,int a){
	if(cnt==m){
		for(int i=0;i<m;i++){
			std::cout<<arr[i]<<' ';
		}
		std::cout<<'\n';
		return;
	}
	for(int i=a;i<=n;i++){
		if(!v[i]){
			arr[cnt]=i;
			v[i]=true;
			solv(cnt+1,i+1);
			v[i]=false;
		}
	}
}
int main(){
	std::cin>>n>>m;
	solv(0,1);
}