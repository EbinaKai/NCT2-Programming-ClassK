// 順列を計算するプログラム
#include <stdio.h>
#include <stdlib.h>

//プロトタイプ宣言
int permutation(int n,int r);
int factrial(int n);

int main(int argc, char *argv[]) {
    int n,r,val;
    n = atoi(argv[1]);
    r = atoi(argv[2]);

    //関数の使い分け
    if(n == r){
        val = factrial(n);
    } else {
        val = permutation(n,r);
    }

    //出力部分
    printf("%d\n",val);
    
    return 0;
}

//permutation関数
int permutation(int n,int r){
    int val = 1;
    for(int i=n;i>(n-r);i--){
        val *= i;
    }
    return val;
}
//factrial関数
int factrial(int n){
    int val;
    if(n==1){
        val = 1;
    } else {
        val = n * factrial(n - 1);
    }
    return val;
}