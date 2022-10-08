#include<iostream>
#include<algorithm>
int n,m,arr[15];
char index[15];
bool comp(char a,char b){
	return a<b;
}
void DFS(int cnt,int min){
	if(cnt==m){
		int aeiou=0, other=0;
		for(int i=0;i<m;i++){
			if(index[arr[i]]=='a'||
			index[arr[i]]=='e'||
			index[arr[i]]=='i'||
			index[arr[i]]=='o'||
			index[arr[i]]=='u'){
				aeiou+=1;
			}
			else other+=1;
		}
		if(aeiou>=1&&other>=2){
			for(int i=0;i<m;i++){
				std::cout<<index[arr[i]];
			}
			std::cout<<'\n';
		}
		return;
	}
	for(int i=min;i<n;i++){
		arr[cnt]=i;
		DFS(cnt+1,i+1);
	}
	
}
int main() {
	std::cin>>m>>n;
	for(int i=0;i<n;i++){
		std::cin>>index[i];
	}
	std::sort(index,index+n,comp);

	DFS(0,0);
}