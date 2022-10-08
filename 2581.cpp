#include<iostream>
int arr[246912];
int main(){
	arr[1]=true;
	for(int i=2;i<=123456/2;i++){
		for(int j=2;j*i<=246912;j++){
			arr[j*i]=true;
		}
	}
	int n,m,sum=0,cnt=0,min=10000;
	std::cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(arr[i]==false){
			sum+=i;
			cnt++;
			if(min>i){
				min=i;
			}
		}
	}
	if(cnt!=0){
		std::cout<<sum<<'\n'<<min;	
	}
	else{
		std::cout<<-1;
	}
}