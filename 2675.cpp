#include<iostream>

int main()
{
	int n,num;
    std::string arr;
    std::cin>>n;
    for(int i=0;i<n;i++){
    	std::cin>>num>>arr;
    	for(int j=0;j<arr.size();j++){
    		for(int l=0;l<num;l++){
    			std::cout<<arr[j];
			}
		}
		std::cout<<"\n";
	}
}