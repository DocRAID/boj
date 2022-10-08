#include<iostream>
#include<cstring>
int main(){
	int n;
	char arr[1000]={0};
	std::cin>>arr;
	n=strlen(arr);
	for(int i=0;i<strlen(arr);){
		if(arr[i]=='c'&&arr[i+1]=='='){
			n--;
			i+=2;
		}
		else if(arr[i]=='c'&&arr[i+1]=='-'){
			n--;
			i+=2;
		}
		else if(arr[i]=='d'&&arr[i+1]=='z'&&arr[i+2]=='='){
			n-=2;
			i+=3;
		}
		else if(arr[i]=='d'&&arr[i+1]=='-'){
			n--;
			i+=2;
		}
		else if(arr[i]=='l'&&arr[i+1]=='j'){
			n--;
			i+=2;
		}
		else if(arr[i]=='n'&&arr[i+1]=='j'){
			n--;
			i+=2;
		}
		else if(arr[i]=='s'&&arr[i+1]=='='){
			n--;
			i+=2;
		}
		else if(arr[i]=='z'&&arr[i+1]=='='){
			n--;
			i+=2;
		}
		else{
			i++;
		}
	}
	std::cout<<n;
}