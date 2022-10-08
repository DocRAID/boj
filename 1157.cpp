#include<stdio.h>
#include<string.h>
int main(){
	char input[1000001]={0};
	int isDouble=0,max=0,num,maxChar[26]={0};
	scanf("%s",input);
	for(long long i=0;input[i]!='\0';i++){
		if(input[i]>'Z'){
			input[i]-=32;
		}
		num=input[i]-65;
		++maxChar[num];
	}
	num=0;
	for(int i=0;i<26;i++){
		if(max<=maxChar[i]){
			max=maxChar[i];
			num=i;
		}
	}
	for(int i=0;i<26;i++){
		if(max==maxChar[i]){
			isDouble++;
		}
	}
	if(isDouble>1){
		printf("?");
	}
	else{
		printf("%c",num+65);
	}
}