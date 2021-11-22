#include<stdio.h>
#include<math.h>

int main(void) {
    double r,theta;
    double rad,x,y;
    printf("Please input the length and angle of the vector.\n");
    scanf("%lf",&r);
    scanf("%lf",&theta);
    
    // 入力された角度 [degree] をラジアンに変換して rad へ格納
    // 必要な定数は math.h で定義されたものを利用すること
    rad = theta * M_PI / 180;
    
    // x にベクトルの x 成分を，y にベクトルの y 成分を格納
    x = r * cos(rad);
    y = r * sin(rad);
    printf("(%f,%f)\n",x,y);
    return 0;
}