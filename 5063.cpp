#include<stdio.h>
int main(){
	int n, r, e, c, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &r, &e, &c);
		if((r + c) < e)
			printf("advertise\n");
		else if ((r + c) > e)
			printf("do not advertise\n");
		else if ((r + c) == e)
			printf("does not matter\n");
	}
}