#include "fibonacci.h"

int main(int argc, char *argv[]){
    //変数設定
    int n,val;
    n = atoi(argv[1]);

    //計算部分
    if (n >= 0){
        val = fibonacci(n);

        //出力部分
        printf("%d\n",val);
    } else {
        printf("error");
    }

	return 0;
}