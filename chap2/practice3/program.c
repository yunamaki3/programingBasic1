#include <stdio.h>
int main()
{
  int x;
  int y;
  printf("平均値を計算します\n");
  printf("整数xを入力してください :");
  scanf("%d",&x);
  printf("整数yを入力してください :");
  scanf("%d",&y);
  int avg = (x+y)/2;
  printf("平均値は %d です。\n",avg);
}
