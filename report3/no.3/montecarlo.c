#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //変数用意
    int precision,count;
    double pi,x,y;
	srand((unsigned int)time(NULL));


    //入力部分
    scanf("%d",&precision);

    //処理部分
    for(int i=0;i<precision;i++){
        x = rand() / (double)RAND_MAX;
        y = rand() / (double)RAND_MAX;
        if(sqrt(x*x + y*y) <= 1){
            count ++;
        }
    }
    
    pi = 4 * (double)count / precision;

    //出力部分
    printf("%f\n",pi);

	return 0;
}