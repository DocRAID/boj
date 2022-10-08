#include<iostream>
int n,arr[10],list[10],sym[4],max=-1000000000,min=1000000000;
void DFS(int cnt){
	if(cnt==n-1){
		int result=list[0];
		for(int i=0;i<n-1;i++){
			switch(arr[i]){
				case 0:
					result+=list[i+1];
					break;
				case 1:
					result-=list[i+1];
					break;
				case 2:
					result*=list[i+1];
					break;
				default:
					result/=list[i+1];
					break;
			}
		}
		if(max<=result){
			max=result;
		}
		if(min>=result){
			min=result;
		}
		return;
	}
	for(int i=0;i<4;i++){
		if(sym[i]>0){
			sym[i]-=1;
			arr[cnt]=i;
			DFS(cnt+1);
			sym[i]+=1;
		}
	}
}
int main() {
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>list[i];
	}
	// + - * /
	for(int i=0;i<4;i++){
		std::cin>>sym[i];
	}
	DFS(0);
	std::cout<<max<<'\n'<<min;
}
