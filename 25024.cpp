#include<iostream>
bool hour(int a,int b){
	if(a>=0&&a<=23&&b>=0&&b<60){
		return true;
	}
	return false;
}
bool month(int a,int b){
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
		if(b>=1&&b<=31){
			return true;
		}
		else return false;
	}
	else if(a==4||a==6||a==9||a==11){
		if(b>=1&&b<=30){
			return true;
		}
		else return false;
	}
	else if(a==2){
		if(b>=1&&b<=29){
			return true;
		}
		else return false;
	}
	else return false;
}
int main(){
	int n,a,b;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>a>>b;
		std::cout<<(hour(a,b)?"Yes ":"No ");
		std::cout<<(month(a,b)?"Yes\n":"No\n");
	}
}