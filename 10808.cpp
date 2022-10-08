#include<iostream>
int main(){
	int arr[26]={0};
	std::string n;
	std::cin>>n;
	for(int i=0;i<n.length();i++){
		arr[n[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		std::cout<<arr[i]<<' ';
	}
}