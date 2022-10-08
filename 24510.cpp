#include<iostream>
#include<string>
int main() {
	std::string input;
	int n;
	std::cin>>n;
	int maxcnt = 0;
	for(int i=0;i<n;i++){
		std::cin>>input;
		int cnt=0;
		for(int j=0;j<input.length();j++){
			if(input[j]=='f'){
				if(input[j+1]=='o'){
					if(input[j+2]=='r'){
						cnt++;
						j+=2;
					}
				}
			}
			if(input[j]=='w'){
				if(input[j+1]=='h'){
					if(input[j+2]=='i'){
						if(input[j+3]=='l'){
							if(input[j+4]=='e'){
								cnt++;
								j+=4;
							}
						}
					}
				}
			}
		}
		if(cnt>maxcnt){
			maxcnt=cnt;
		}
	}
	std::cout<<maxcnt;
}