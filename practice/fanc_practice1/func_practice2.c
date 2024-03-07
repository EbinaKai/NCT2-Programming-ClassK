// 直交座標系を極座標系に変換するプログラム
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
    double x,y;
    double rad,r,theta;

    // 1 つめの引数を実数に変換して x に，
    x = atof(argv[1]);

    // 2 つめの引数を実数に変換して y に格納する。
    y = atof(argv[2]);
    
    // ベクトルの大きさを求めて r に，
    r = sqrt(x*x + y*y);
    
    // ベクトルの偏角 [rad] を求めて rad へ格納し，
    rad = atan2(x,y);
    
    // rad を [deg] に変換して theta へ格納する。
    theta = rad * 180 / M_PI;

    printf("(%f,%f)\n",r,theta);
    return 0;
}