#include <stdio.h>

int main() {
    //変数宣言
    double a;
    double b;
    double h;
    printf("台形の面積を求めます。\n");
    printf("上底の値を入力してください: ");
    scanf("%lf", &a);
    printf("下底の値を入力してください: ");
    scanf("%d", &b);
    printf("高さの値を入力してください: ");
    scanf("%lf", &h);
    double area = (a + b) * h / 2;
    printf("台形の面積は %.3f です。\n", area);
}