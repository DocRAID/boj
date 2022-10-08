#include<iostream>
#include<string.h>
#include<stdio.h>
int main(){
	char S[100];
	scanf("%s",S);
	int a[26];
	int go;
	for(int i=0;i<26;i++){
		a[i]= -1;
	}
	for(int i=strlen(S);i>=0;i--){
		go=S[i]-97;
		a[go]=i;
	}
	for(int i=0;i<26;i++){
		printf("%d ",a[i]);
	}
}