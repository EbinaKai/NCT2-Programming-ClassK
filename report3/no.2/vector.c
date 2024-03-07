#include <stdio.h>

void vec_sum(double* a, double* b, double* sum);
void vec_diff(double* a, double* b, double* dif);
double inner_product(double* a, double* b);

int main(void){
    //変数用意
    double in_pd, a[3], b[3], sum[3], dif[3];

    //入力部分
    for (int i = 0; i < 3; i++){
        scanf("%lf",&a[i]);
    }
    for (int i = 0; i < 3; i++){
        scanf("%lf",&b[i]);
    }

    //処理部分
    vec_sum(a,b,sum);
    vec_diff(a,b,dif);
    in_pd = inner_product(a,b);

    //出力部分
    printf("sum: %f,%f,%f\n",sum[0],sum[1],sum[2]);
    printf("dif: %f,%f,%f\n",dif[0],dif[1],dif[2]);
    printf("prd: %f\n",in_pd);

	return 0;
}

//ベクトル加算関数
void vec_sum(double* a, double* b, double* sum){
    for (int i = 0; i < 3; i++){
        sum[i] = a[i] + b[i];
    }
}
//ベクトル減算関数
void vec_diff(double* a, double* b, double* dif){
    for (int i = 0; i < 3; i++){
        dif[i] = a[i] - b[i];
    }
}
//ベクトル内積関数
double inner_product(double* a, double* b){
    double in_pd=0;
    for(int i=0;i<3;i++){
        in_pd += a[i]*b[i];
    }
    return in_pd;
}