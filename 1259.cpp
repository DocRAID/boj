#include<iostream>
#include<cstring>
int main(){
	int index, len;
	char arr[100000]={0};
	for(int i=0;1;i++){
		index=0;
		std::cin>>arr;
		len=strlen(arr);
		if(arr[0]=='0'){
			break;
		}
		for(int j=0;j<len/2;j++){
			if(arr[j]==arr[len-j-1]){
				index++;
			}
		}
		if(strlen(arr)/2==index){
			std::cout<<"yes\n";
		}
		else{
			std::cout<<"no\n";
		}
	}
}