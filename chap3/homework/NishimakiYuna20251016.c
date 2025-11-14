#include <stdio.h>

int main() {
  int k = 1;
  printf("題意に沿う解は以下の通りです\n");
  while ( k <= 200 ){
    if (!(6*k*k*k - 2196*k*k + 238728*k - 6597360)) {
      printf("n = %d\n",k);
    }
    k++;
  } 
}