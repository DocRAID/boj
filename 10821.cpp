#include<iostream>
#include<cstring>
int main(){
	char str[103] = " ";
	int i, cnt = 1, length = 0;
	std::cin>>str;
	length = strlen(str);
	for(i = 0; i < strlen(str); i++){
		if(str[i] == ','){
			cnt++;
		}
	}
	std::cout<<cnt;
}