#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    //変数用意
    double a,b,c,d;
    double ans[2];

    //入力部分
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    //計算部分
    d = pow(b,2) - (4 * a * c);
    if(d<0){
        //虚数解の場合
        ans[0] = -b / 2 / a;
        ans[1] = pow(fabs(d),0.5) / 2 / a;
        printf("%.3f ± %.3fi\n",ans[0],ans[1]);
    } else {
        //実数解の場合
        ans[0] = (-b + pow(d,0.5)) /(2*a);
        printf("%.3f\n",ans[0]);
        if (d>0){
            //重解ではない場合
            ans[1] = (-b - pow(d,0.5)) /2/a;
            printf("%.3f\n",ans[1]);
        }
    }

	return 0;
}