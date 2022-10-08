#include<iostream>
int main(){
	int a,b,c,d,e,total;
	std::cin>>a>>b>>c>>d>>e;
	for(int i=1;1;i++){
		total=0;
		if(i%a==0)
			total++;
		if(i%b==0)
			total++;
		if(i%c==0)
			total++;
		if(i%d==0)
			total++;
		if(i%e==0)
			total++;
		if(total>=3){
			std::cout<<i;
			break;
		}
	}
}