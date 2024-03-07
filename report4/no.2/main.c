#include "binomial.h"

int main(int argc, char* argv[]) {
    int n, coefficient;
    n = atoi(argv[1]);
    if (n == 0) {
        printf("1\n");
    } else {
        for (int r=0; r <= n; r++) {
            // 一番最初は + を表示しない
            if (r!=0) printf(" + ");

            // 係数が0,1でなければ表示
            coefficient = binomial(n, r);
            if (coefficient > 1) {
                printf("%d",coefficient);
            }

            // aの指数が0でなければ表示
            if (n-r != 0) {
                printf("a");
                if (n-r != 1)   printf("^%d", n-r);
            }

            // bの指数が0でなければ表示
            if (r != 0) {
                printf("b");
                if ( r != 1)    printf("^%d", r);
            }
        }
        printf("\n");
    }
    return 0;
}