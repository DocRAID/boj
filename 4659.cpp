#include<stdio.h>
#include<string.h>
int main(){
	char pass[21]={0};
	int is_comp,a,b,b1,b2,c;
	for(;1;){
		is_comp=a=b=b1=b2=c=0;
		scanf("%s",pass);
		if(!strcmp(pass,"end")){
			break;
		}
		for(int i=0;i<strlen(pass);i++){
			if(pass[i]=='a'||pass[i]=='e'||pass[i]=='i'||pass[i]=='o'||pass[i]=='u'){
				a++;
				b1++;
				b2=0;
			}
			else{
				b2++;
				b1=0;
			}
			
			if(b1>2||b2>2){
				b=1;
			}
			if(i>0){
				if(pass[i]!='e'&&pass[i]!='o'){
					if(pass[i]==pass[i-1]){
						c=1;
					}
				}
			}
		}
		if(a>0&&b==0&&c==0){
			is_comp=1;
		}
		
		if(is_comp==1){
			printf("<%s> is acceptable.\n",pass);
		}
		else printf("<%s> is not acceptable.\n",pass);
	}
}