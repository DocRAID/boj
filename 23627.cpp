#include<iostream>
int main(){
	std::string arr;
	std::cin>>arr;
	int len=arr.length();
	if(arr[len-5]=='d'&&arr[len-4]=='r'&&arr[len-3]=='i'&&arr[len-2]=='i'&&arr[len-1]=='p'){
		std::cout<<"cute";		
	}
	else{
		std::cout<<"not cute";
	}
}