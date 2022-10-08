#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int a=1; a<=n; a++) {
        for(int i=n; i>a; i--) printf(" ");
        for(int i=0; i<a+a-1; i++) printf((i%2==0) ? "*":" ");
        printf("\n");
    }
}