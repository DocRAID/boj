#include<stdio.h>
#include<stack>
using namespace std;
stack<int> s;
int main(){
	int n,num;//n개 입력 num은 push에 쓰임. 
	char a[10]={0};
	scanf("%d",&n); //n번 입력  
	
	for(int i=0;i<n;i++){
		scanf("%s",a);
		if(a[0]=='p'){
			if(a[1]=='u'){ //push 
				scanf("%d",&num);
				s.push(num); 
			}
			else{ //pop 
				if(s.empty()){
					printf("-1\n");
				}
				else{
					printf("%d\n",s.top());
					s.pop();
				}
			
			}
		}
		
		else if(a[0]=='s'){ //size
			printf("%d\n",s.size());
		}
		
		else if(a[0]=='e'){ //empty
			if(s.empty()){
			printf("1\n");	
			}
			
			else printf("0\n");
		}
		
		else if(a[0]=='t'){ //top
			if(s.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",s.top());
			}
			
		}
	
		
	}
	
}
//	s.push(1);
//	s.push(5);
//	s.pop();
//	for(int i=0;i<4;i++){
//		s.push(i);
//	}
//	s.pop();
//	s.pop();
//	while(!s.empty()){
//		printf("%d ",s.top());
//		s.pop();
//	}