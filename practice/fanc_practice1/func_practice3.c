#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    // argv[1] と argv[2] の文字列を比較して，
    // 辞書登場順が早いほう（文字コードが小さいほう）を
    // 画面に出力する。
    if (strcmp(argv[1],argv[2]) >= 0){
        printf("%s\n",argv[1]);
    } else {
        printf("%s\n",argv[2]);
    }
    return 0;
}