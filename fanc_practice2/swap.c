#include <stdio.h>
#define N 5 //ここで N を定義。

// swap 関数の関数プロトタイプ宣言をここに書く
int swap(int* data,int i,int j);

int main(void) {
    int data[N],i,j;
    
    //入力部分
    for(i=0;i<N;i++) {
        scanf("%d",&data[i]);
    }
    
    for(i=0;i<N-1;i++) {
        for(j=i+1;j<N;j++) {
            if(data[i]>data[j]) {
                swap(data,i,j);
            }
        }
    }

    //出力部分
    printf("Sort results:\n");

    for(i=0;i<N;i++) {
        printf("%d ",data[i]);
    }
    
    printf("\n");
    
    return 0;
}


//swap関数
int swap(int* data,int i,int j){
    int val;
    val = data[i];
    data[i] = data[j];
    data[j] = val;

    return 0;
}