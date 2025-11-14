#include <stdio.h>
#include "header.h"

int main(){
  //変数宣言
  int x[N];

  //点数のユーザー入力
  for (int i=0; i<N; i++){
    printf("%d人目の点数を入力してください -> ",i+1);
    scanf("%d",&x[i]);
  }

  //点数が格納されている番地、人数を引数としてcalcDeviation実行
  calcDeviation(&x[0],N);

  //偏差値の計算結果表示
  for (int j=0; j<N; j++){
    printf("%d人目の偏差値は%dです。\n",j+1,x[j]);
  }
}