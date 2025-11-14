#include <stdio.h>
# define M 2
# define K 3
# define N 2

int main() {
  int a[M][K] = {{83,12,42},{32,43,56}};
  int b[K][N] = {{32,21},{24,36},{11,14}};
  int num;
  for (int m=0; m<M; m++){
    for (int n=0; n<N; n++){
      num = 0;
      for (int k=0; k<K; k++){
        num += a[m][k] * b[k][n];
      }
      printf("%2d ",num);
    }
    printf("\n");
  }
}