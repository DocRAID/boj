#include <stdio.h>

 

int main()

{

    int L, A, B, C, D;

    int koreanDay, mathDay;

 

    scanf("%d", &L);

    scanf("%d %d %d %d", &A, &B, &C, &D);

 

    if (A % C != 0) {

        koreanDay = (A / C) + 1;

    }

    else {

        koreanDay = (A / C);

    }

 

    if (B % D != 0) {

        mathDay = (B / D) + 1;

    }

    else {

        mathDay = (B / D);

    }

 

    if (koreanDay >= mathDay) {

        printf("%d", L - koreanDay);

    }

    else if (koreanDay < mathDay) {

        printf("%d", L - mathDay);

    }

}

