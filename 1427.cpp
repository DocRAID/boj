#include<iostream>
#include<algorithm>
int main(){
	int arr[10],input,cnt=0;
	std::cin>> input;
	for(int i=0;i<10;i++){
		cnt++;
		if(input > 9){
			arr[i]=input%10;
			input/=10;
		}
		else{
			arr[i]=input;
			break;
		}
	}
	std::sort(arr,arr+cnt);
	for(int i=cnt-1;i>=0;i--){
		std::cout<<arr[i];
	}
	return 0;
}