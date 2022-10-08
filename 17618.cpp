#include<iostream>
int main(){
	long long n,cnt,a,ans=0;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		a=i;
		cnt=0;
		for(;a>9;){
			cnt+=a%10;
			a/=10;
		}
		cnt+=a%10;
		if(i%cnt==0){
			ans++;
		}
	}
	std::cout<<ans;
}