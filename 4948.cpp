#include<iostream>
int arr[246912];
int main(){
	arr[1]=true;
	for(int i=2;i<=123456/2;i++){
		for(int j=2;j*i<=246912;j++){
			arr[j*i]=true;
		}
	}
	while(1){
		int input;
		std::cin>>input;
		if(input==0){
			break;
		}
		int cnt=0;
		
		for(int i=input+1;i<=input*2;i++){
			if(arr[i]==false){
				cnt++;
//				std::cout<<i<<", ";
			}
		}
		std::cout<<cnt<<'\n';
	}
}