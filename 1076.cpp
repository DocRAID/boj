#include<iostream>
int main(){
	long long result=0;
	char input[2][10]={},input3[10]={};
	std::cin>>input[0]>>input[1]>>input3;
	for(int i=0;i<2;i++){
		if(input[i][0]=='b'&&input[i][1]=='l'&&input[i][2]=='a'){
			i==0?result+=0:result+=0;
		}
		else if(input[i][0]=='b'&&input[i][1]=='r'){
			i==0?result+=10:result+=1;
		}
		else if(input[i][0]=='r'&&input[i][1]=='e'){
			i==0?result+=20:result+=2;
		}
		else if(input[i][0]=='o'&&input[i][1]=='r'){
			i==0?result+=30:result+=3;
		}
		else if(input[i][0]=='y'&&input[i][1]=='e'){
			i==0?result+=40:result+=4;
		}
		else if(input[i][0]=='g'&&input[i][1]=='r'&&input[i][2]=='e'&&input[i][3]=='e'){
			i==0?result+=50:result+=5;
		}
		else if(input[i][0]=='b'){
			i==0?result+=60:result+=6;
		}
		else if(input[i][0]=='v'){
			i==0?result+=70:result+=7;
		}
		else if(input[i][0]=='g'&&input[i][1]=='r'){
			i==0?result+=80:result+=8;
		}
		else if(input[i][0]=='w'&&input[i][1]=='h'){
			i==0?result+=90:result+=9;
		}
	}
		if(input3[0]=='b'&&input3[1]=='l'&&input3[2]=='a'){
			result*=1;
		}
		else if(input3[0]=='b'&&input3[1]=='r'){
			result*=10;
		}
		else if(input3[0]=='r'&&input3[1]=='e'){
			result*=100;
		}
		else if(input3[0]=='o'&&input3[1]=='r'){
			result*=1000;
		}
		else if(input3[0]=='y'&&input3[1]=='e'){
			result*=10000;
		}
		else if(input3[0]=='g'&&input3[1]=='r'&&input3[2]=='e'&&input3[3]=='e'){
			result*=100000;
		}
		else if(input3[0]=='b'&&input3[1]=='l'){
			result*=1000000;
		}
		else if(input3[0]=='v'){
			result*=10000000;
		}
		else if(input3[0]=='g'&&input3[1]=='r'){
			result*=100000000;
		}
		else if(input3[0]=='w'&&input3[1]=='h'){
			result*=1000000000;
		}
	std::cout<<result;
	
}