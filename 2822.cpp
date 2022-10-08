#include<iostream>
#include<map>
#include<algorithm>
int main(){
	std::map<int,int> mp;
	int arr[8],cnt=0,tmp[5];
	for(int i=0;i<8;i++){
		std::cin>>arr[i];
		mp.insert({arr[i],i+1});
	}
    std::sort(arr,arr+8);
    int a=0;
    for(int i=7;i>=3;i--){
        cnt+=arr[i];
    }
    std::cout<<cnt<<'\n';
    cnt=0;
    for(int i=3;i<8;i++){
        tmp[cnt]=mp.find(arr[i])->second;
        cnt+=1;
    }
    std::sort(tmp,tmp+5);
    for(int i=0;i<5;i++){
        std::cout<<tmp[i]<<" ";
    }
}