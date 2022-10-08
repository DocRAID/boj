#include<iostream>
#include<stdio.h>
int arr[50][50];
int y,x, max=1;
void check(int inY,int inX){
	for(int i=inY+1;i<y;i++){
		if(arr[inY][inX]==arr[i][inX]){
			for(int j=inX+1;j<x;j++){
				if(arr[inY][j]==arr[i][j] && arr[i][j]==arr[inY][inX]){
					if((inX>j?inX-j:j-inX) == (inY>i?inY-i:i-inY)){
						int now =(inX>j?inX-j:j-inX);
						now+=1;
						if(max<=now){
							max=now;
//							std::cout<<inX<<' '<<inY<<' '<<j<<' '<<i<<'\n';
						}	
					}
				}
			}
		}
	}
	
}
int main(){
	std::cin>>y>>x;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<y-1;i++){
		for(int j=0;j<x-1;j++){
			check(i,j);
		}
	}
	std::cout<<max*max;
}