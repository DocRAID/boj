#include<iostream>
int comp(int a,int b){
	if(a>b){
		return a;	
	} else{
		return b;
	}
}
int main(){
	int n,result=0,maxResult=0;
	std::cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		std::cin>>a>>b>>c;
		if(a==b && b==c){
			result=10000+a*1000;
		}
		else if(a==b ||b==c ||c==a){
			if(a==b){
				result=1000+a*100;
			}
			else{
				result=1000+c*100;
			}
		}
		else{
			a>b&&a>c?result=a*100:b>c?result=b*100:result=c*100;
		}
		maxResult=comp(result,maxResult);
	}
	std::cout<<maxResult;
}