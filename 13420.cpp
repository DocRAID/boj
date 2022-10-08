#include <stdio.h>

int main() {

    long long int T; scanf("%lld", &T);

    for (int i = 0; i < T; i++) {
        long long int num1, num2, result;
        char cacul, equal;
        scanf("%lld %c %lld %c %lld", &num1, &cacul, &num2, &equal, &result);


        if (cacul == '+') {
            if (num1 + num2 == result) printf("correct\n");
            else printf("wrong answer\n");

        }
        else if (cacul == '-') {
            if (num1 - num2 == result) printf("correct\n");
            else printf("wrong answer\n");

        }
        else if (cacul == '*') {
            if (num1 * num2 == result) printf("correct\n");
            else printf("wrong answer\n");

        }
        else if (cacul == '/') {
            if (num1 / num2 == result) printf("correct\n");
            else printf("wrong answer\n");

        }

    }

}

