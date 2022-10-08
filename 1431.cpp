#include<iostream>
#include<algorithm>
bool cmp(std::string a,std::string b){
	if(a.length()==b.length()){
		int ain=0,bin=0;
		for(int i=0;i<a.length();i++){
			if(a[i]<58){
				ain+=a[i]-48;
			}
		}
		for(int i=0;i<b.length();i++){
			if(b[i]<58){
				bin+=b[i]-48;
			}
		}
		if(ain==bin){
			return a<b;
		}
		else{
			return ain<bin;
		}
	}
	else{
		return a.length()<b.length();
	}

}
int main() {
	int n;
	std::string arr[50];
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++){
		std::cout<<arr[i]<<'\n';
	}
}