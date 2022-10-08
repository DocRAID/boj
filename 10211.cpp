#include<iostream>
int arr[1000];
int sum(int start,int end){
	int all=0;
	for(int i=start;i<end;i++){
		all+=arr[i];
	}
	return all;
}
int main(){
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int input,max=-1000;
		std::cin>>input;
		for(int j=0;j<input;j++){
			std::cin>>arr[j];
		}
		for(int j=0;j<input;j++){
			for(int l=j+1;l<=input;l++){
				//처음 끝
				int now=sum(j,l);
//				std::cout<<"process: "<<now<<'\n';
				if(now>max){
					max=now;
				}
			}
		}
		std::cout<<max<<'\n';
	}
}