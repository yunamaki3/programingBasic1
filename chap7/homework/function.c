//`sqrt`を実行する際に必要なライブラリ
#include <math.h>

//calcDeviation関数
void calcDeviation(int *x,int num){
  //合計得点を計算するための変数
  int total = 0;
  for (int i=0; i<num; i++){
    //受け取った点数が格納されている配列の番地にアクセスし、各点数を取得
    //取得した点数を`total`に加算して代入
    total += *(x+i);
  }
  //平均値を変数`avg`に代入
  int avg = total / num;
  //分散s^2を計算して代入するための変数`s`
  int s = 0;
  for (int j=0; j<num; j++){
    //x[j]の値から平均`avg`を引いた偏差を変数`hensa`へ代入
    int hensa = *(x+j)-avg;
    //偏差`hensa`の二乗を`s`へ加算して愛入
    s += hensa*hensa;
  }

  //分散を求める
  //平方根は`sqrt`関数で実現
  int bunsan = sqrt(s / num);

  //それぞれの点数に対応する偏差値を計算
  for(int k=0; k<num; k++){
    //点数が格納されている場所に直接アクセスして計算結果の偏差値に書き換える
    *(x+k) = 10 * (*(x+k)-avg) / bunsan + 50;
  }
}