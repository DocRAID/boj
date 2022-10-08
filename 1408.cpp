#include<stdio.h>

int main() {

    int h,m,s;

    scanf("%d:%d:%d", &h, &m, &s);

    

    int T1 = s + m * 60 + h * 3600;

    h = m = s = 0;

    scanf("%d:%d:%d", &h, &m, &s);

    

    int T2 = s + m * 60 + h * 3600;

    if (T1 > T2){

        T2 += 24 * 60 * 60;

    }

 

    int sol = T2 - T1;

 

    h = sol / 3600;

    sol %= 3600;

    m = sol / 60;

    sol %= 60;

    printf("%02d:%02d:%02d",h,m,sol);

}