#include <stdio.h>

int main(void){
  int step,i;
  char array[256],convert[256];

  //入力部分
  scanf("%s",&array);
  scanf("%d",&step);

  //処理部分
  for(i=0;array[i]!='\0';i++){
	convert[i] = (array[i]-97+step) % 26 + 97;  //aの文字コードは97
  }
  convert[i+1] = '\0';

  //出力部分
  printf("%s\n",convert);
 
  return 0;
}
