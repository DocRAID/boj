#include<iostream>
int n,want,wanted[3],arr[1000][3];
int main(){
	int num;
	std::cin>>n>>want;
	for(int i=0;i<n;i++){
		std::cin>>num;
		std::cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		if(num==want){
			wanted[0]=arr[i][0], wanted[1]=arr[i][1], wanted[2]=arr[i][2];
		}
	}
	
	//compare
	int cnt=1;
	for(int i=0;i<n;i++){
		if(arr[i][0]>=wanted[0]){
			if(arr[i][0]>wanted[0]){
				cnt++;
			}
			else if(arr[i][1]>=wanted[1]){
				if(arr[i][1]>wanted[1]){
					cnt++;
				}
				else if(arr[i][2]>=wanted[2]){
					if(arr[i][2]>wanted[2]){
						cnt++;
					}
				}
			}
		}
		
	}
	std::cout<<cnt;
//	std::cout<<wanted[0]<<" "<<wanted[1]<<" "<<wanted[2];
}