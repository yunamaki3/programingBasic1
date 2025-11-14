#include <stdio.h>
#include "header.h"

int main(){
  int s=0;
  printf("Setting N=%d \n",N);
  for (int n=1; n<=N; n++){
    s += f(n) + g(n);
    printf("Now N=%d / S=%d \n",n,s);
  }
  printf("Result S=%d \n",s);
  return 0;
}