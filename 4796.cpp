#include<iostream>
int main(){
	for(int i=1;1;i++){
		int L,P,V;
		int result;
		// 사용가능 일수 , 사용일수 , 휴가  
		std::cin>>L>>P>>V;
		if(L==0&&P==0&&V==0){
			break;
		}
		result=(V/P)*L;
		result+=V%P<L?V%P:L;
		std::cout<<"Case "<<i<<": "<<result<<'\n'; 
		
	}
}

