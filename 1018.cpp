#include<iostream>
int MIN(int a,int b){
	return a>b?b:a;
}
int main(){
	char board[50][50];
	int n,m,cntB=0,cntW=0,min=80;
	std::cin>>n>>m;
	for(int i=0;i<n;i++){
		std::cin>>board[i];
	}
	
	for(int i=0;i<n-7;i++){
		for(int j=0;j<m-7;j++){
			cntB=0;
			cntW=0;
			for(int a=i;a<i+8;a++){
				for(int b=j;b<j+8;b++){
					if((a+b)%2==0){
						if(board[a][b]=='B'){
							cntW++;
						}
						else{
							cntB++;
						}
					}
					else{
						if(board[a][b]=='B'){
							cntB++;
						}
						else{
							cntW++;
						}
					}
				}
			}
			min=MIN(cntB,min);
			min=MIN(cntW,min);
		}
	}
	std::cout<<min;
	
}