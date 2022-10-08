#include<stdio.h>
#include<string.h>
int main(){
	char input[101];
	int n;
	scanf("%d",&n);
	int count=n;
	for(int i=0;i<n;i++){
		char first = '0';
		int alphabet[26]={0, };
		scanf("%s",input);
		for(int j=0;j<strlen(input);j++){
			if(first != input[j]){
				first = input[j];
				alphabet[input[j]-'a']+=1;
			}
			if(alphabet[input[j]-'a']==2){
				count -=1;
				break;
			}
		}
	}
	printf("%d",count);
}