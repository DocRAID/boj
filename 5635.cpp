#include<iostream>
#include<algorithm>
int main(){
	int n,day,month,year,value[100],max=0,min=99999999,maxIndex,minIndex;
	char name[100][16]={0};
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>>name[i]>>day>>month>>year;
		value[i]=day+month*31+year*365*31;
//		std::cout<<value[i]<<"\n";
		if(max<value[i]){
			max=value[i];
			maxIndex=i;
		}
		if(min>value[i]){
			min=value[i];
			minIndex=i;
		}
	}
	std::cout<<name[maxIndex]<<"\n"<<name[minIndex];
	//문제점: 달의 일수를 고려하지 않았음. 그냥 31일로 가정하고 나온 결과. 
}